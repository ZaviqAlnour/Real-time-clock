# Real-Time Clock (C Project)

A simple **Real-Time Clock** built in **C** that displays the **current date and time** in real time.  
The clock updates every second and supports both **12-hour** and **24-hour** time formats.

---

## Features
- Displays live updating time and date
- 12-hour (AM/PM) and 24-hour formats
- Auto screen refresh every second
- Works on Windows, Linux, and macOS

---

## How It Works
- Uses `time.h` for system time  
- Updates every second using `sleep(1)`  
- Formats output with `strftime()`  
- Simple terminal-based interface

---

## File Structure
Real-time-clock/
│
├── main.c # Source code
└── README.md # Documentation

yaml
Copy code

---

## Technologies Used
- Language: C  
- Libraries: `<time.h>`, `<unistd.h>`, `<stdio.h>`  
- Compiler: GCC or compatible C compiler  

---

## How to Run
1. Clone the repository:
   ```bash
   git clone https://github.com/ZaviqAlnour/Real-time-clock.git
Navigate to the folder:

bash
Copy code
cd Real-time-clock
Compile the code:

bash
Copy code
gcc main.c -o clock
Run the program:

bash
Copy code
./clock
Author
Zaviq Alnour