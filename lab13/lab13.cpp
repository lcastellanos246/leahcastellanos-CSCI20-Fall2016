#include <iostream>
using namespace std;

int main() {
    const int startingMin = 0;
    const int startingHour = 0;
    int userStartHour = 0;
    int userEndHour = 0;
    int timeSecMin = 0;
    int timeMin = 0;
    int timeThirdMin = 0;
    int i = 0;
    int t = 0;
    int x = 0;
    
    

    startingMin == timeMin;
    i = 1;
    x = 2;
    t = 1;
    for (i < 3 || i > 0; timeMin <= 59;) {
    cout << i << ":" << timeMin << " PM" <<endl;
    
    timeMin = timeMin + 1;

    
    }
    while (timeSecMin <= 59) {
        cout << x << ":" << timeSecMin << " PM" << endl;
        timeSecMin = timeSecMin + 1;
    }


    cout << "Enter Start Hour: " << endl;
    cin >> userStartHour;

    cout << "Enter End Hour: " << endl;
    cin >> userEndHour;


    for ( t <= userStartHour; ) {
    cout << t << ":" << timeThirdMin << " PM" << endl;
    timeThirdMin = timeThirdMin + 15;
    timeThirdMin = timeThirdMin <= 59;
    }
    

 return 0;
    }
    

