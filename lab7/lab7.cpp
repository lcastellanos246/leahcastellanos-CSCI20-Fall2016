#include <iostream>
#include <string>
using namespace std;

void allStar(std::string (verse)) //verse
{

    cout << "Well the years start coming and they don't stop coming \n"
    "Fed to the rules and I hit the ground running \n"
    "Didn't make sense not to live for fun \n"
    "Your brain gets smart but your head gets dumb \n"
    "So much to do, so much to see \n" 
    "So what's wrong with taking the backstreets \n"
    "You'll never know if you don't go \n"
    "You'll never shine if you don't glow \n" << endl;
    
    return; 
}

void rockStar(std::string(chorus)) //chorus
{
    cout << "Hey now, you're an all star, get your game on, go play \n"
    "Hey now, you're a rockstar, get the show on, get paid \n"
    "And all that glitters is gold \n"
    "Only shooting stars break the mold \n" << endl;
    
    return;
    
}

int main ()
{
    string verse;
    string chorus;
    
    cout << "Somebody once told me the world is gonna roll me \n"
    "I ain't the sharpest tool in the shed \n"
    "She was looking kind of dumb with her finger and her thumb \n"
    "In the shape of an L on her forehead" << endl;
    
    allStar(std::string (verse));
    
    rockStar(std::string(chorus));
    
    cout << "It's a cool place, and they say it gets colder \n"
    "You're bundled up now, wait til you get older \n"
    "But the meteor men beg to differ \n"
    "Judging by the hole in the satellite picture \n"
    "The ice we skate is getting pretty thin \n"
    "The water's getting warm so you might as well swim \n"
    "My world's on fire, how about yours? \n"
    "That's the way I like it abd I never get bored \n" << endl;
    
    rockStar(std::string(chorus));
    
    rockStar(std::string (chorus));
    
    cout << "Somebody once asked could I spare some change for gas \n"
    "I need to get myself away from this place \n"
    "I said yep, what a concept \n"
    "I could use a little fuel myself \n"
    "And we could all use a little change \n" << endl;
    
    allStar(std::string (verse));
    
    rockStar(std::string(chorus));
    
    
}