#ifndef ANIMATION_H
#define ANIMATION_H

#include <iostream>
#include <stdlib.h>
#include <string>
#include <unistd.h>
#include <fstream>

#include "ExceptionHandling.h"

using namespace std;

class Animation // class for text animation
{
private:
    string line1, line2;

public:
    Animation();
    ~Animation();
    void startingGameNameImage();
    void monsterImage();
    void fightImage();
    void castleImage();
};

// Instance
Animation images;

// Construtor
Animation::Animation()
{
    line1 = "";
    line2 = "";

}

// Destructor
Animation::~Animation()
{}

// Function to show the game name in a seemingly animated way
// by running simple loops
void Animation::startingGameNameImage()
{
    for(int i = 0; i < 3; i++)
    {
        ifstream myfile1 ("GameNameImage.txt");
        if (myfile1.is_open())
        {
            while(getline(myfile1, line1))
                cout << line1 << "\n";
            myfile1.close();
        }
        else                                    // Handling Exception: Missing file
            exceptionWrongFile("GameNameImage.txt");
        sleep(1);

        line1 = "";
        ifstream myfile2 ("GameNameImage2.txt");
        if (myfile2.is_open())
        {
            while(getline(myfile2, line1))
                cout << line1 << "\n";
            myfile2.close();
        }
        else                                    // Handling Exception: Missing file
            exceptionWrongFile("GameNameImage2.txt");
        sleep(1);
    }
}

// Text based image of the castle
void Animation::castleImage()
{
    ifstream myfile3 ("CastleImage.txt");
    if (myfile3.is_open())
    {
        while(getline(myfile3, line2))
            cout << line2 << "\n";
        myfile3.close();
    }
    else                                    // Handling Exception: Missing file
        exceptionWrongFile("CastleImage.txt");
    sleep(4);
}

// Dragon's text based image
void Animation::monsterImage()
{
    string line;
    ifstream myfile4 ("Dragon.txt");
    if (myfile4.is_open())
    {
        while(getline(myfile4, line))
            cout << line << "\n";
        myfile4.close();
    }
    else                                    // Handling Exception: Missing file
        exceptionWrongFile("Dragon.txt");
    sleep(2);
}

// When a fight starts, this function shows that
// the character is attempting to hit the dragon
void Animation::fightImage()
{
    string line;
    for(int i = 0; i < 2; i++)
    {
        line = "";
        ifstream myfile5 ("FightScene1.txt");
        if (myfile5.is_open())
        {
            while(getline(myfile5, line))
                cout << line << "\n";
            myfile5.close();
        }
        else                                    // Handling Exception: Missing file
            exceptionWrongFile("FightScene1.txt");
        sleep(1);

        line = "";
        ifstream myfile6 ("FightScene2.txt");
        if (myfile6.is_open())
        {
            while(getline(myfile6, line))
                cout << line << "\n";
            myfile6.close();
        }
        else                                    // Handling Exception: Missing file
            exceptionWrongFile("FightScene2.txt");
        sleep(1);
    }
}

#endif // ANIMATION_H
