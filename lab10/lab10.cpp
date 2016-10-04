#include<iostream>
using namespace std;

int main() {
    
    bool isTrue = false;
    bool isFalse = false;
    
    int suzyAge = 25;
    int johnAge = 21;
    int varX = 7;
    int varY = 7;
    int varA = 1;
    int varB = 9;
    int varLimit = 20;
    int varCount = 10;
    int varT = -4;
    int varZ = 0;
    int varVariable = -5;
    int varAA = 16;
    int varXX = -2;
    int varYY = 5;
    int varJ = -2;
    int varK = 5;
    int varL = 4;
    int varZZ = 10;
    
    //for question one
    if ((suzyAge > johnAge) || (varX >= varY)) {
        cout << "1. True" << endl;
        
    }
    
    else {
        cout << "1. False" << endl;
        
    }
    
    //for question two
    if (varX >= varY) {
        cout << "2. True" << endl;
        
    }
    else { 
        cout << "2. False" << endl;}
    
    //for question 3
    if (varA == varB) {
        cout << "3. True" <<endl;
        
    }
    else {
        cout << "3. False" <<endl;
    }
    //for question four
    if ((varLimit*varCount)/2 > 0) {
        cout << "4. True" << endl;
    }
    else{
        cout <<"4. False"<<endl;
    }
    //for question 5
    if (varT > 5 || varZ < 2) {
        cout << "5. True" << endl;
    }
    else {
        cout << "5. False"<<endl;
    }
    //for question 6
    if (!(varVariable > 0)) {
        cout << "6. True" << endl;
    }
    else {
        cout<<"6. False"<<endl;
    }
    //for question 7
    if (varAA / 4 < 8 && varAA >= 4) {
        cout << "7. True"<<endl;
    }
    else {
        cout << "7. False"<<endl;
    }
    //for question 8
    if (varXX*varYY < 10 || varYY*varZZ < 10) {
        cout << "8. True"<<endl;
    }
    else {
        cout << "8. False"<<endl;
    }
    //for question 9
    if (!(varJ*varL < 10) || (varYY / varXX)* 4 < varYY*2){
        cout << "9. True"<<endl;
        
    }
    else {
        cout <<"9. False"<<endl;
    }
    

}