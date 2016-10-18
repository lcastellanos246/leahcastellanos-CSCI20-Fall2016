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
    t = 0;
    for (i=1; timeMin <= 59;) {
    cout << i << ":" << timeMin << " PM" <<endl;
    
    timeMin = timeMin + 1;
        
    }
    for (x=2; timeSecMin <= 59; timeSecMin = timeSecMin + 1 ) {
        cout << x << ":" << timeSecMin << " PM" << endl;
        
    }


    cout << "Enter Start Hour: " << endl;
    cin >> userStartHour;

    cout << "Enter End Hour: " << endl;
    cin >> userEndHour;


    for ( t >= userStartHour; timeThirdMin < 60; ++t) {
    cout << t << ":" << timeThirdMin << " PM" << endl;
    timeThirdMin = timeThirdMin + 15;
    
    }
    for (t <= userEndHour; timeThirdMin < 60; ++t){
    cout << t << ":" << timeThirdMin << " PM" << endl;
    timeThirdMin = timeThirdMin + 15;
    }
    

 return 0;
    }
    