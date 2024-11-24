# Hour Calculator

This simple C++ program calculates the end time based on the current time and the number of remaining hours you provide. It handles different scenarios, including calculations that span into the next day or multiple days.

## Features
- Input the current hour and the remaining hours.
- Automatically calculates the end hour.
- Handles cases where the end time is:
  - Later in the same day.
  - The next day.
  - Multiple days ahead.

## How to Use
1. Compile the program using a C++ compiler (e.g., `g++`):
    ```bash
    g++ -o hour_calculator hour_calculator.cpp
    
    Run the program:

    ./hour_calculator
    ```

    Enter the current hour when prompted.
    Enter the number of remaining hours.
    The program will calculate and display:
        The end hour (with appropriate handling for transitions across days).
        The number of days and hours remaining, if the duration spans multiple days.

Example

Heure actuelle : 22
Heure restantes : 5
Heure de fin : Demain a 3H

Notes

    -Ensure the current hour is provided in a 24-hour format (e.g., 15 for 3 PM).
    -For large inputs, the program will calculate the number of full days and remaining hours accurately.
    -Input 0 when prompted to exit the program.
