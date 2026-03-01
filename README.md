# Electrical Load Monitoring System

## Introduction

This project is a simple Electrical Load Monitoring System developed using C++.  
The program allows a user to register electrical appliances, store their power ratings and daily usage hours, and calculate the total daily energy consumption in kilowatt-hours (kWh).

The system is menu-driven and runs in the console.

---

## Purpose of the Project

The main purpose of this project is to:

- Understand how energy consumption is calculated
- Practice C++ programming concepts
- Use vectors to store multiple records
- Apply input validation
- Build a structured and organized program

---

## How the Program Works

Each appliance has:

- Name  
- Power rating (in Watts)  
- Usage hours per day  

The program calculates energy using the formula:

Energy (kWh/day) = (Power × Hours) ÷ 1000

For example:

If a fan uses 75W for 8 hours:

Energy = (75 × 8) ÷ 1000  
Energy = 0.6 kWh per day

---

## Features

The program includes the following features:

1. Register appliance  
   The user enters the appliance name, power rating, and hours used per day.

2. View all appliances  
   Displays all registered appliances in a formatted table.

3. Search appliance by name  
   Allows the user to search for an appliance (case-insensitive).

4. Energy summary  
   Shows energy consumption for each appliance and the total daily energy.

5. Input validation  
   - Power must be greater than 0  
   - Hours must be between 0 and 24  

---

## Tools and Concepts Used

- C++
- Structures (struct)
- Functions
- Vectors (dynamic storage)
- Input validation
- Looping statements
- String handling
- Formatting using iomanip

---

## How to Compile and Run

Using g++:

g++ main.cpp -o loadsystem  
./loadsystem  

Or run the program using CodeBlocks, Dev C++, or any C++ IDE.

---

## Sample Output

Menu:

1. Register appliance  
2. View all appliances  
3. Search appliance by name  
4. Energy summary (kWh/day)  
0. Exit  

Energy Summary Example:

Name                 Power(W)     Hours        kWh/day  
--------------------------------------------------------  
Fan                  75.00        8.00         0.600  
TV                   120.00       5.00         0.600  
--------------------------------------------------------  
TOTAL ENERGY: 1.200 kWh/day  

---

## What I Learned

From this project, I learned:

- How to design a menu-driven program  
- How to store and manage multiple records using vectors  
- How to validate user input  
- How to calculate electrical energy consumption  
- How to organize code using functions  

---

## Conclusion

The Electrical Load Monitoring System successfully calculates daily energy consumption of household appliances.  
The program is simple, clear, and can be expanded in the future to include cost calculation, file storage, or monthly energy tracking.

Project completed successfully.