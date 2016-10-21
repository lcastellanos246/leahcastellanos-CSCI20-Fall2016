# include <iostream> 
#include <string>
using namespace std; 

int main() {        
//Read a character in char ch  

string ch;

cout << "Please enter a character: ";        
cin  >> ch;         // check -- is it a letter?? 

if (ch >= "A" && ch <= "Z") 
{            
             
    cout << "Yes, that is a uppercase letter.\n" << endl;          
  }        
else if (ch >= "a" && ch <= "z") {
             
    cout << "Yes, that is a lowercase letter.\n" << endl;            
}         
else  {            
    cout << "Not a letter\n" << endl;
    
}       

cout <<"First, I copied and pasted the code, and made it easier to read. Then I ran the code to see the output. There was not output because of several errors.\n";
cout <<"I look at all the errors and decide to fix the simple ones first, or the ones I know are wrong. For example, the first problem was that cout wasn't declared, so I looked before cout in my code to see if there was any problems, and there was a semicolon that wasn't supposed to be in the comments.\n";
cout <<"I reran the code, and it saus ch wasn't declared. So I add string. I then replace '' to quotes. I check each output, and realize the lowercase one doesn't work. I added the secondary if statement into the first, and now it's fixed.\n"<<endl;
return 0; }