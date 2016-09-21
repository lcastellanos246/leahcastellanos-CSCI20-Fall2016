#include <iostream>
using namespace std;

float toKilo (int kilo)
{
    float numKilo = 0.0;
    float kiloToPounds = 0.0;
    numKilo = kilo;
    kiloToPounds = (numKilo * 2.205);
    
    return kiloToPounds;
    
}


float toPounds (int pounds)
{
    
    float numPounds = 0.0;
    float poundsToKilo = 0.0;
    numPounds = pounds;
    poundsToKilo = (numPounds * 0.454);
    
    return poundsToKilo;
    
}


int main()
{
    int userKilo = 0;
    int userPounds = 0;
    
    cout << "Please enter number of kilograms: ";
    cin >> userKilo;
    
    cout << userKilo << " kilogram(s) is " << toKilo (userKilo) << " in pound(s)." << endl;
    
    cout << endl;
    
    cout << "Please enter number of pounds: ";
    cin >> userPounds; 
    
    cout << userPounds << "pound(s) is " << toPounds (userPounds) << " in kilogram(s). " << endl; 
    
}
