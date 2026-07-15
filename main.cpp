#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>
#include <vector>
#include <limits>

using namespace std;

class TransportFare {
    
private:
    string passengerName;
    string routeName;
    string passengerCategory;
    string transportType;

    double distance;
    double fareRate;
    double luggageWeight;

    double baseFare;
    double discountAmount;
    double luggageCharge;
    double finalFare;

public:

    // Constructor
    TransportFare();

    // Input Function
    void setTripDetails();

    // Validation
    bool validateDetails();

    // Calculation Functions
    void calculateBaseFare();
    void applyDiscount();
    void calculateLuggageCharge();
    void calculateFinalFare();
    void processFare();

    // Output Functions
    void displayFareReport();
    void saveFareReport(ofstream &outFile);
};

//===========================
// Constructor
//===========================

TransportFare::TransportFare()
{
    passengerName = "";
    routeName = "";
    passengerCategory = "";
    transportType = "";

    distance = 0;
    fareRate = 0;
    luggageWeight = 0;

    baseFare = 0;
    discountAmount = 0;
    luggageCharge = 0;
    finalFare = 0;
}

//==================================================
// FUNCTION: setTripDetails()
//==================================================

void TransportFare::setTripDetails()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    cout << "\n=========================================\n";
    cout << "ENTER PASSENGER DETAILS";
    cout << "\n=========================================\n";

    cout << "Passenger Name: ";
    getline(cin, passengerName);

    cout << "Route Name: ";
    getline(cin, routeName);

    cout << "Transport Type (Bus/Taxi/Trotro): ";
    getline(cin, transportType);

    cout << "Passenger Category (Student/Child/Senior/Adult): ";
    getline(cin, passengerCategory);

    cout << "Distance (km): ";
    while (!(cin >> distance) || distance < 0)
{
    cout << "Invalid distance. Enter again: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

    cout << "Fare Rate (GHS per km): ";
   while (!(cin >> fareRate) || fareRate < 0)
{
    cout << "Invalid fare rate. Enter again: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}

    cout << "Luggage Weight (kg): ";
    while (!(cin >> luggageWeight) || luggageWeight < 0)
{
    cout << "Invalid luggage weight. Enter again: ";
    cin.clear();
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
}
}

//==================================================
// FUNCTION: validateDetails()
//==================================================

bool TransportFare::validateDetails()
{
    if(distance < 0)
    {
        cout << "\nERROR: Distance cannot be negative.\n";
        return false;
    }

    if(fareRate < 0)
    {
        cout << "\nERROR: Fare rate cannot be negative.\n";
        return false;
    }

    if(luggageWeight < 0)
    {
        cout << "\nERROR: Luggage weight cannot be negative.\n";
        return false;
    }

    return true;
}

    //==================================================
// FUNCTION: calculateBaseFare()
//==================================================

void TransportFare::calculateBaseFare()
{
    baseFare = distance * fareRate;
}

//==================================================
// FUNCTION: applyDiscount()
//==================================================

void TransportFare::applyDiscount()
{
    discountAmount = 0;

    if (passengerCategory == "Student" || passengerCategory == "student")
    {
        discountAmount = baseFare * 0.10;
    }
    else if (passengerCategory == "Child" || passengerCategory == "child")
    {
        discountAmount = baseFare * 0.50;
    }
    else if (passengerCategory == "Senior" ||
             passengerCategory == "Senior Citizen" ||
             passengerCategory == "senior")
    {
        discountAmount = baseFare * 0.20;
    }
    else
    {
        discountAmount = 0;
    }
}

//==================================================
// FUNCTION: calculateLuggageCharge()
//==================================================

void TransportFare::calculateLuggageCharge()
{
    if (luggageWeight <= 10)
    {
        luggageCharge = 0;
    }
    else
    {
        luggageCharge = (luggageWeight - 10) * 2.0;
    }
}

//==================================================
// FUNCTION: calculateFinalFare()
//==================================================

void TransportFare::calculateFinalFare()
{
    finalFare = (baseFare - discountAmount) + luggageCharge;
}

//==================================================
// FUNCTION: processFare()
//==================================================

void TransportFare::processFare()
{
    calculateBaseFare();
    applyDiscount();
    calculateLuggageCharge();
    calculateFinalFare();
}

//==================================================
// FUNCTION: displayFareReport()
//==================================================

void TransportFare::displayFareReport()
{
    cout << fixed << setprecision(2);

    cout << "\n=========================================\n";
    cout << "        TRANSPORT FARE REPORT\n";
    cout << "=========================================\n";

    cout << "Passenger Name      : " << passengerName << endl;
    cout << "Route Name          : " << routeName << endl;
    cout << "Transport Type      : " << transportType << endl;
    cout << "Passenger Category  : " << passengerCategory << endl;

    cout << "\nDistance            : " << distance << " km" << endl;
    cout << "Fare Rate           : GHS " << fareRate << " per km" << endl;

    cout << "\n-----------------------------------------\n";

    cout << "Base Fare           : GHS " << baseFare << endl;
    cout << "Discount            : GHS " << discountAmount << endl;
    cout << "Luggage Charge      : GHS " << luggageCharge << endl;

    cout << "-----------------------------------------\n";

    cout << "FINAL FARE          : GHS " << finalFare << endl;

    cout << "=========================================\n";
}

void TransportFare::saveFareReport(ofstream &outFile)
{
    outFile << fixed << setprecision(2);

    outFile << "\n=========================================\n";
    outFile << "        TRANSPORT FARE REPORT\n";
    outFile << "=========================================\n";
    
    outFile << "Passenger Name      : " << passengerName << endl;
    outFile << "Route Name          : " << routeName << endl;
    outFile << "Transport Type      : " << transportType << endl;
    outFile << "Passenger Category  : " << passengerCategory << endl;

    outFile << "\nDistance            : " << distance << " km\n";
    outFile << "Fare Rate           : GHS " << fareRate << " per km\n";

    outFile << "\n-----------------------------------------\n";

    outFile << "Base Fare           : GHS " << baseFare << endl;
    outFile << "Discount            : GHS " << discountAmount << endl;
    outFile << "Luggage Charge      : GHS " << luggageCharge << endl;

    outFile << "-----------------------------------------\n";

    outFile << "FINAL FARE          : GHS " << finalFare << endl;

    outFile << "=========================================\n";
}

int main()
{
    TransportFare fare;

    char choice;

    do
    {
        fare.setTripDetails();

        if(fare.validateDetails())
        {
            fare.processFare();

            fare.displayFareReport();

            ofstream file("TransportFareReport.txt", ios::app);

            if(file)
            {
                fare.saveFareReport(file);
                file.close();

                cout << "\nReport saved successfully.\n";
            }
            else
            {
                cout << "\nUnable to save file.\n";
            }
        }

        cout << "\nDo you want to calculate another fare? (Y/N): ";
        cin >> choice;

    }while(choice == 'Y' || choice == 'y');


    cout << "\nThank you for using Transport Fare System.\n";

    return 0;
}