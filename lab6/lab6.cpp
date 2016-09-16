#include <iostream>
using namespace std;

void PrintFace () {
    char faceChar = '~';
    
    cout << "     " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << endl;
    cout << " Copyright Leah Castellanos 2016" << endl;
    cout << "     " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << "  " << faceChar << endl; 
    
    return;
    
}

int main()
{
    PrintFace();
    return 0; 
}