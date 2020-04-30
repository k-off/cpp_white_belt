# cpp_white_belt

The first course of "The art of development using modern C++" specialization. The repository contains some of the assignments and the final project.

## About the specialization
"The art of development using modern C++" is offered by [Moscow Institute of Physics and Technology](https://mipt.ru/english/), [Yandex](www.yandex.ru) and [E-Learning Development Fund](https://eldf.net) at [Coursera](www.coursera.org).
The main objective of the specialization is to provide a practical experience in the following topics:
**C++17, Testing, Debugging, STL, Algorithms, Parallel Computing, OOP, Code Refactoring**

![MIPT](https://d3njjcbhbojbot.cloudfront.net/api/utilities/v1/imageproxy/https://coursera-university-assets.s3.amazonaws.com/48/291dfd1736174fa3dc51726f58884c/logo_square400x400eng_notext_inv.png?auto=format%2Ccompress&dpr=2&w=120&h=120)  ![YANDEX](https://d3njjcbhbojbot.cloudfront.net/api/utilities/v1/imageproxy/http://coursera-university-assets.s3.amazonaws.com/aa/cae40116304b32816d2181c20c99fc/Coursera-userpic.png?auto=format%2Ccompress&dpr=2&w=120&h=120)  ![ELDF](https://d3njjcbhbojbot.cloudfront.net/api/utilities/v1/imageproxy/http://coursera-university-assets.s3.amazonaws.com/ec/b38186de2c485cb2e5ba546a16c9cb/4.png?auto=format%2Ccompress&dpr=2&w=120&h=120)

## About the course
The "White Belt" course covers :
 - **data types, conditionals, loops, lambda-functions**
 - **string, map, set**
 - **struct, classes, operator overload, scope**
 - **input/output streams**

![MIPT](white.png)

## Assignments
### Bus Stops
Implement a program to store bus routes including bus numbers, stops names, possible interchanges.

**Supported commands:**
 - `NEW_BUS bus stop_count stop1 stop2 ...` add a new route `bus` with `stop_count` stops with names `stop1, ...`
 - `BUSES_FOR_STOP stop` print out all the routes available at the stop `stop`
 - `STOPS_FOR_BUS bus` print out all the stops available for the route `bus`
 - `ALL_BUSES` print out all the routes with their stops

**Input Format:**
```
Q - number of requests
R[0] - first request
...
R[Q-1] - last request
```

**Test Input:**
```
10
ALL_BUSES
BUSES_FOR_STOP Marushkino
STOPS_FOR_BUS 32K
NEW_BUS 32 3 Tolstopaltsevo Marushkino Vnukovo
NEW_BUS 32K 6 Tolstopaltsevo Marushkino Vnukovo Peredelkino Solntsevo Skolkovo
BUSES_FOR_STOP Vnukovo
NEW_BUS 950 6 Kokoshkino Marushkino Vnukovo Peredelkino Solntsevo Troparyovo
NEW_BUS 272 4 Vnukovo Moskovsky Rumyantsevo Troparyovo
STOPS_FOR_BUS 272
ALL_BUSES
```

**Test Output:**
```
No buses
No stop
No bus
32 32K
Stop Vnukovo: 32 32K 950
Stop Moskovsky: no interchange
Stop Rumyantsevo: no interchange
Stop Troparyovo: 950
Bus 272: Vnukovo Moskovsky Rumyantsevo Troparyovo
Bus 32: Tolstopaltsevo Marushkino Vnukovo
Bus 32K: Tolstopaltsevo Marushkino Vnukovo Peredelkino Solntsevo Skolkovo
Bus 950: Kokoshkino Marushkino Vnukovo Peredelkino Solntsevo Troparyovo
```

### Rational Calculator
Implement a calculator based on the class `Rational` with overloaded operators `+,-,*,/`, input/output streams redirection and exception handling.

**Test Input:**
```
1/2 + 1/3
1/2 + 5/0
4/5 / 0/8
```

**Test Output:**
```
5/6
Invalid argument
Division by zero
```

## Final Project
### Database
Implement a simple database. It must interact via standard input/output.

**Supported commands:**
 - `Add date event` add an event, _no output_
 - `Del date event` delete an event, _output - `Deleted successfully` on success, `Event not found` otherwise_
 - `Del date` delete all the events for `date`, _output - `Deleted N events` if any events deleted_
 - `Find date` print out all the events for `date` in sorted order in format `event`
 - `Print` print all events for all dates, sorted by date first and the by event name in format `yyyy-mm-dd event`

**Error handling:**
 - `date` format must be _year-month-day_, otherwise print `Wrong date format: date`
 - `day` must be in range  [1-31], otherwise print `Day value is invalid: day`
 - `month` must be in range [1-12], otherwise print `Month value is invalid: month`
 - uncnown command should result in `Unknown command: command` message
 
 These errors must lead to the stop of program execution.
 Other errors should not lead to program crash.
 
**Limitations:**
 - `command` is always followed by an appropriate amount of arguments separated with `' '` (space)
 - `year` can be negative, but the correct output of a negative year is not requiered
 - `day` range is constant for all months
 - `event` is a non-empty string without spaces
 - `date` and `command` must not be preceded or sufficed by any extra non-space characters
 
There are _final_test_input_ and _final_test_output_ files attached to the repository to test the program.
