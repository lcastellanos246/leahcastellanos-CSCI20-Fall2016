#include <iostream>
#include <string>
using namespace std;

int main() {
    
    
    string userWorking;
    string userPeople;
    int userLearning;
    string userMoney;
    
    cout << "What Sponge Bob character are you?" <<endl;
    cout << "Do you like working? Y or N. ";
    cin >> userWorking; 
    if (userWorking == "y" || userWorking == "Y") {
        cout <<"Do you like money? ";
        cin >> userMoney;
        if (userMoney == "y" || userMoney == "Y") {
            cout <<"You got Mr.Krabs! "<<endl;
        }
        else if (userMoney == "n" || userMoney == "N"){
            cout << "Do you like learning new things? ";
            switch (userLearning) {
                case 'y':
                case 'Y':
                    cout <<"You got Sandy! "<<endl;
                    break;
                case 'n':
                case 'N':
                    cout <<"You got Sponge Bob! "<<endl;
                    break;
                default:
                    cout <<"Invalid input "<<endl;
                    break;
            }
        }}
   else if (userWorking == "n" || userWorking =="N"){
       cout << "Do people annoy you? ";
       cin >> userPeople;
        if (userPeople == "y" || userPeople == "Y") {
            cout << "You got Squidward! "<<endl;
        }
        else if (userPeople == "n" || userPeople == "N"){
            cout << "You got Patrick! "<<endl;
        }
        else {
            cout << "Invalid input. "<<endl;
        }
   }
   else {
       cout <<"Invalid input. "<<endl;
   }
   return 0;
}