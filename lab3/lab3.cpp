//credits: RayHanz14

#include <iostream>
using namespace std;

int main () 
    {
    
    double totalCents; //coins person has added
    
    cout<<"The number coins you have added: ";
    cin >> totalCents; 
    
    int totalQuarters = totalCents / 25;

    int totalDimes = (totalCents - (totalQuarters * 25)) / 10;
    
    int totalNickels = (totalCents - ((totalQuarters * 25) + (totalDimes * 10))) / 5;
    
    int totalPennies = (totalCents - ((totalQuarters * 25) + (totalDimes * 10) + (totalNickels * 5)));
    
    double totalAmount = totalCents * 0.01; //back to currency
    
    double fee = totalAmount * 0.109;
    
    double totalFee = totalAmount - fee; //grand total with fee included
    

    
    cout<<"The number of quarters: " << totalQuarters << endl;
    cout<<"The number of dimes: " << totalDimes << endl;
    cout<<"The number of nickels: " << totalNickels << endl;
    cout<<"The number of pennies: " << totalPennies << endl;
    
    cout<<"Total: $" << totalAmount << endl;
    cout<<"With fee of 10.9 percent, you'll get back: $" << totalFee << endl;
    
    

}