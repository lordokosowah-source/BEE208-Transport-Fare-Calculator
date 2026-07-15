# Pseudocode - Transport Fare Calculation System

BEGIN

Create TransportFare object

Display system title

Input:
    Passenger Name
    Route Name
    Transport Type
    Passenger Category
    Distance
    Fare Rate
    Luggage Weight


Validate input values

IF Distance < 0 THEN
    Display "Distance cannot be negative"
    STOP
ENDIF


IF Fare Rate < 0 THEN
    Display "Fare rate cannot be negative"
    STOP
ENDIF


IF Luggage Weight < 0 THEN
    Display "Luggage weight cannot be negative"
    STOP
ENDIF


BaseFare = Distance × FareRate


IF Passenger Category = Student THEN
    Discount = BaseFare × 10%

ELSE IF Passenger Category = Child THEN
    Discount = BaseFare × 15%

ELSE IF Passenger Category = Senior THEN
    Discount = BaseFare × 20%

ELSE
    Discount = 0

ENDIF


DiscountedFare = BaseFare - Discount


IF Luggage Weight <= 10 THEN
    LuggageCharge = 0

ELSE IF Luggage Weight <= 20 THEN
    LuggageCharge = 5

ELSE
    LuggageCharge = 10

ENDIF


FinalFare = DiscountedFare + LuggageCharge


Display passenger details

Display final fare


END