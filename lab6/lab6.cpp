#include <iostream>
#include <string>

using namespace std;

void PrintFace () {
    char faceChar = '~';
    
    cout << "     " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << endl;
    cout << " Copyright Leah Castellanos 2016" << endl;
    cout << "     " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << endl; 
    
    return;
    
}


struct MonsterObjects {
        const char *head;
        const char *eyes;
        const char *ears;
        const char *nose;
        const char *mouth;
};
    
int main()
{ 
    MonsterObjects monster1;
    monster1.head = "Zombus";
    monster1.eyes = "Spritem";
    monster1.ears = "Vegitas";
    monster1.nose = "None";
    monster1.mouth = "Wackus";
    
    cout << "Monster One: " << monster1.head << ", " << monster1.eyes << ", " << monster1.ears << ", " << monster1.nose << ", " << monster1.mouth << "." 
    << endl;
    cout << "Monster Two: Franken, Spirtem, Spritem, Wackus, Vegitas." << endl;
    cout << "Monster Three: Happy, Wackus, Vegitas, Vegitas, Wackus." << endl;
    cout << "Monster Four: Zombus, Vegitas, None, Wackus, Spritem." <<endl;
    
    PrintFace();
    return 0;

    
}
