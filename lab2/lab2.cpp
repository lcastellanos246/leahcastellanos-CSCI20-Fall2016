#include <cstdlib>
#include <time.h>
#include <iostream>

using namespace std; 

int main() {
    srand(time(0));
    int number; 
    number = rand() % 1000 + 1;
    int guess;
   do {
    cout << "guess?: ";
    cin >> guess;
    if (guess < number)
        cout << "Lower" <<endl;
    else if (guess > number)
        cout << "Higher" <<endl;
    else
        cout << "Correct!" <<endl;
   } while (guess != number);
   system("PAUSE");
 
 return 0;
 
    
    
    
}