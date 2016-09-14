#include <iostream>
#include <string>
using namespace std;

int main ()
{

    int numHours; //hours per day
    
    cout << "Enter hours per day: ";
    cin >> numHours;
    
    double numRate; //dollars per hour
    
    cout << "Enter hourly pay: $";
    cin >> numRate; 
    
    double grossPay = 0.0; //pay before taxes
    
    double numTaxes = 0.0;
    
    double netPay = 0.0;
    
    grossPay = (numRate * numHours) * 7;
    numTaxes = grossPay * 0.17; //amount to take out for taxes
    netPay = (grossPay - numTaxes); //amount after taxes
    
    string wordFirstName; 
    string wordLastName;
    
    cout << "Enter First Name: ";
    cin >> wordFirstName; 
    
    cout << "Enter Last Name: ";
    cin >> wordLastName; 
    
    
    cout << endl;
    cout << "Name: " << wordFirstName << " " << wordLastName <<endl;

    cout << "Hours: " << numHours << endl;
    
    cout << "Pay Per Hour: $" << numRate << endl;
    
    cout << "Gross Pay: $" << grossPay << endl;
    
    cout << "Net Pay: $" << netPay << endl; 
    
    
}