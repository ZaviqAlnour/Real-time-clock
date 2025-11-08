#include <stdio.h>
#include <time.h>
#include <unistd.h>
#include <stdlib.h>

void fill_time(char *buffer, size_t size, int format);
void fill_date(char *buffer, size_t size);
void clear_screen();
int choose_format();

int main()
{
    char time[50];
    char date[50];
    int fmt = choose_format();

    while (1)
    {
        fill_date(date, sizeof(date));
        fill_time(time, sizeof(time), fmt);

        clear_screen();
        printf("_______________________________\n");
        printf("/ Real-Time Clock Application \\\n");
        printf("--------------------------------\n\n");
        printf("Date: %s\n", date);
        printf("Current time: %s\n", time);
        printf("_______________________________\n");
        printf("Press Ctrl+C to exit.\n");
        printf("--------------------------------\n");
        sleep(1);
    }

    return 0;
}

void fill_time(char *buffer, size_t size, int format)
{
    time_t rawtime;
    struct tm *current_time;
    time(&rawtime);
    current_time = localtime(&rawtime);

    if (format == 2)
        strftime(buffer, size, "%H:%M:%S", current_time);
    else
        strftime(buffer, size, "%I:%M:%S %p", current_time);
}

void fill_date(char *buffer, size_t size)
{
    time_t rawtime;
    struct tm *current_time;
    time(&rawtime);
    current_time = localtime(&rawtime);
    strftime(buffer, size, "%A-%B-%d-%Y", current_time);
}

void clear_screen()
{
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
}

int choose_format()
{
    int choice;
    printf("Choose the time format: \n");
    printf("1. 12-hour format (default).\n");
    printf("2. 24-hour format.\n");
    printf("Make a choice (1/2): ");
    scanf("%d", &choice);
    if (choice != 2) choice = 1;
    return choice;
}
