#include <iostream>
#include <string>
using namespace std;

int main() {
    
    string firstName;
    string lastName; 
    bool isSingle = false;
    bool isMarried = false;
    bool isTaxed = false;
    bool isNotTaxed = false;
    
    string userStatus; 
    float userWages = 0;
    float totalAGI = 0;
    float totalTaxedOwed = 0;
    float amountWithheld = 0;
    float endingAmount = 0;
     
    
    cout << "Enter First Name: " <<endl;
    cin >> firstName;
    
    cout << "Enter Last Name: "<<endl;
    cin >> lastName;
    
    cout << "Enter Status (S for Single or M for Married): " <<endl;
    cin >> userStatus;
    
    if (userStatus == "s" || userStatus == "S") { //status for single
        isSingle = true;
    }
    else if (userStatus == "m" || userStatus == "M") { //status for married
        isMarried = true;
    }
    
    cout << "Enter Wages: $ " <<endl;
    cin >> userWages;
    
    if (userWages - 10000 > 0) { //equation for if youre taxed
        isTaxed = true;
    }
    else {
        isTaxed = false;
    }
    
    if (isSingle && !isTaxed) { //if single and not taxed
        totalTaxedOwed = 0;
    }
    else if (isMarried && !isTaxed ) { //if married and not taxed
        totalTaxedOwed =0;
    }
    else if (isSingle && isTaxed) { //if single and taxed 
        if (userWages > 0 || userWages < 8925) {
            userWages * 0.10 == totalAGI;
            }
             else if ( userWages > 8926 || userWages < 36250) {
            ((userWages - 8925) * 0.15) + 892.50 == totalAGI;
            }
            else if (userWages > 36251 || userWages < 87850) {
            ((userWages - 36250) * 0.25) + 4991.25 == totalAGI;
            }
            else if ( userWages > 87851) {
            ((userWages - 87850)* 0.28) + 17891.25 == totalAGI;
    }
    else if (isMarried && isTaxed) {
        if (userWages > 0 || userWages < 17850) {
            userWages * 0.10 == totalAGI;
        }
        else if (userWages > 17851 || userWages < 72500) {
            ((userWages - 17850)*0.15)-1785 == totalAGI;
        }
        else if (userWages > 72501) {
            ((userWages - 725000)* 0.28)+9982.50 == totalAGI;
        }   
        }}
 
    
    cout << "Enter Amount Withheld: $ "<<endl;
    cin >> amountWithheld;
    
    if (totalAGI > amountWithheld) {
        endingAmount == -totalAGI;
    }
    else if (totalAGI < amountWithheld) {
        endingAmount == totalAGI;
    }
    
    
    cout <<"Name: " << firstName << " " <<lastName <<endl;
    cout <<"Total Gross Adjusted Income: " << totalTaxedOwed <<endl;
    cout << "Total Taxed Owed: " << totalAGI <<endl;
    cout << firstName << " " << lastName << " is entitled to a refund of $"<< endingAmount <<endl;
    
    return 0;
}