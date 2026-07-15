# Transport Fare Calculation System

## Project Title
Transport Fare Calculation System Using C++

## Project Description

The Transport Fare Calculation System is a C++ application designed to calculate the final transport fare paid by passengers based on distance travelled, fare rate, passenger category, and luggage weight.

The system reduces manual fare calculation errors by automatically applying passenger discounts and additional luggage charges.

---

## Project Objectives

The objectives of this project are:

1. To develop a computerized system for calculating transport fares.
2. To collect and validate passenger travel information.
3. To calculate base fare based on distance and fare rate.
4. To apply discounts for different passenger categories.
5. To calculate additional luggage charges.
6. To display a complete fare receipt.

---

## Features

The system provides the following features:

- Passenger information input
- Route details recording
- Transport type selection
- Passenger category identification
- Automatic fare calculation
- Student, child, and senior citizen discounts
- Luggage charge calculation
- Input validation
- Fare receipt generation

---

## Technologies Used

Programming Language:
- C++

Development Environment:
- Visual Studio Code / Code::Blocks / Dev-C++

Compiler:
- GNU C++ Compiler (G++)

---

## System Requirements

Hardware Requirements:
- Computer/Laptop
- Minimum 2GB RAM
- Keyboard and monitor

Software Requirements:
- Windows/Linux operating system
- C++ compiler

---

## Program Structure

The program uses Object-Oriented Programming (OOP) concepts.

Main Class:

TransportFare

Functions:

1. setTripDetails()
   - Collects passenger and trip information.

2. validateDetails()
   - Checks that numerical values are valid.

3. calculateBaseFare()
   - Calculates the initial fare.

4. applyDiscount()
   - Applies passenger category discounts.

5. calculateLuggageCharge()
   - Determines extra luggage cost.

6. calculateFinalFare()
   - Calculates the final amount payable.

7. displayFareDetails()
   - Displays the passenger receipt.

---

## Fare Calculation Formula

### Base Fare

Base Fare = Distance × Fare Rate


### Final Fare

Final Fare = Discounted Fare + Luggage Charge

---

## Discount Rules

| Passenger Category | Discount |
|-------------------|----------|
| Student | 10% |
| Child | 15% |
| Senior | 20% |
| Adult | No discount |

---

## Luggage Charges

| Weight | Charge |
|--------|--------|
| 0 - 10 kg | Free |
| 11 - 20 kg | GHS 5 |
| Above 20 kg | GHS 10 |
