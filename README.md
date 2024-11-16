# Time Calculator

This C++ program calculates the end time based on the current time and the remaining hours provided by the user. It can indicate if the end time falls on the same day, the next day, or several days later.

## Features

- Input for the current hour (`currentHour`).
- Input for the remaining hours (`remainHour`).
- Calculation of the end time:
  - On the same day.
  - On the next day, if the time exceeds 24 hours.
  - Display in days and hours for durations exceeding 48 hours.
- User-friendly input handling.

## Example Execution

### Input
```plaintext
Current hour: 15
Remaining hours: 10

Output

End time: 1H

0 to exit

Special Cases

    If the end time exceeds 24 hours, the program outputs "Tomorrow at ...H".
    For durations exceeding two days (48 hours), the program outputs "In X days, at ...H".

Requirements

    A C++ compiler supporting C++11 or later.
    A development environment such as Visual Studio Code or a compiler like g++.

Compilation and Execution

    Compile the program using a command like:

g++ -o TimeCalculator TimeCalculator.cpp

Note

    The program ignores seconds and minutes; it works only with hours.
    Hours must be entered in 24-hour format (0-24).
    Enter 0 to exit the program after the results are displayed.

Contributing

If you have ideas to improve this program or add features, feel free to submit a pull request or open an issue!
