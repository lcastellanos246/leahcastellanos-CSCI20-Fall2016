#include <iostream> 
#include <string>
using namespace std;

int main()
{
    int numberTubs = 0;
    cout<<"Enter a number: ";
    cin >> numberTubs;
    
    
    string wordAdjective;
    string wordPlace;
    string wordFood;
    
    float number2;
    
    char andSym = '&';
    
    cout<<"Enter an adjective: "<<endl;
    cin >> wordAdjective;
    
    cout<<"Enter a place: "<<endl;
    cin >> wordPlace; 
    
    cout<<"Enter a food: "<<endl;
    cin >> wordFood;
    
    cout<<"Enter a special number with decimals: "<<endl;
    cin >> number2;
    
    
    cout<<"Yesterday I went to the store and bought " <<numberTubs<<" tubs of ice  cream."<<endl; 
    
    
    cout<<"The " << wordAdjective <<" ice cream melted by the time I got back to the " << wordPlace <<"." <<endl;
    
    cout<<"When I opened one of the tubs, it started oozing out ice cream. Instead of nice, solid ice cream, I had "<< number2 <<" ounces of soup." <<endl;
    
    cout<<"I put all the ice cream in the freezer, " << andSym <<" instead ate " << wordFood <<"."<<endl;
    

}