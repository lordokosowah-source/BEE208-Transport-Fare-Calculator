# Algorithm for Transport Fare Calculation System

## 1. Problem Statement

Design a program that calculates the final transport fare for a passenger based on distance travelled, fare rate, passenger category, and luggage weight.

The system should collect passenger information, validate the input, calculate the fare, apply applicable discounts, add luggage charges, and display the final amount payable.

---

# 2. Input

The program accepts the following inputs:

1. Passenger Name
2. Route Name
3. Transport Type
4. Passenger Category
5. Distance travelled (km)
6. Fare Rate (GHS per km)
7. Luggage Weight (kg)

---

# 3. Processing

The program performs the following operations:

1. Calculate the base fare.

Formula:

---

# 4. Algorithm

START

1. Create TransportFare object.

2. Display program title.

3. Request passenger details:
   - Passenger name
   - Route name
   - Transport type
   - Passenger category
   - Distance
   - Fare rate
   - Luggage weight

4. Store all entered information.

5. Validate input values.

6. If distance is less than zero:

      Display "Distance cannot be negative"

      Stop program.

7. If fare rate is less than zero:

      Display "Fare rate cannot be negative"

      Stop program.

8. If luggage weight is less than zero:

      Display "Luggage weight cannot be negative"

      Stop program.

9. Calculate base fare:

      Base Fare = Distance × Fare Rate

10. Determine passenger discount.

11. Calculate discounted fare.

12. Calculate luggage charge.

13. Calculate final fare:

      Final Fare = Discounted Fare + Luggage Charge

14. Display passenger details and fare receipt.

15. End program.

---

# 5. Pseudocode

# 5. Pseudocode

BEGIN

    Create TransportFare object

    Display "TRANSPORT FARE CALCULATION SYSTEM"


    // Input passenger details

    Input passenger name

    Input route name

    Input transport type

    Input passenger category

    Input distance travelled

    Input fare rate

    Input luggage weight


    // Validate input data

    IF distance < 0 THEN

        Display "ERROR: Distance cannot be negative"

        STOP

    ENDIF


    IF fareRate < 0 THEN

        Display "ERROR: Fare rate cannot be negative"

        STOP

    ENDIF


    IF luggageWeight < 0 THEN

        Display "ERROR: Luggage weight cannot be negative"

        STOP

    ENDIF


    // Calculate base fare

    baseFare = distance × fareRate


    // Apply passenger discount

    IF passengerCategory = "Student" THEN

        discount = baseFare × 0.10


    ELSE IF passengerCategory = "Child" THEN

        discount = baseFare × 0.15


    ELSE IF passengerCategory = "Senior" THEN

        discount = baseFare × 0.20


    ELSE

        discount = 0


    ENDIF


    // Calculate discounted fare

    discountedFare = baseFare - discount


    // Calculate luggage charge

    IF luggageWeight <= 10 THEN

        luggageCharge = 0


    ELSE IF luggageWeight <= 20 THEN

        luggageCharge = 5


    ELSE

        luggageCharge = 10


    ENDIF


    // Calculate final fare

    finalFare = discountedFare + luggageCharge


    // Display results

    Display passenger name

    Display route name

    Display transport type

    Display passenger category

    Display base fare

    Display luggage charge

    Display final fare


END
---

# 6. Output

The system displays:

- Passenger name
- Route
- Transport type
- Passenger category
- Distance
- Fare rate
- Base fare
- Luggage charge
- Final fare payable

---

# 7. Complexity Analysis

Time Complexity: