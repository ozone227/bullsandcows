//
//  main.cpp
//  bulls and cows
//
//  Created by Ryan Bond on 1/6/17.
//  Copyright © 2017 Ryan Bond. All rights reserved.
//

#include <iostream>
#include <string>
//#include "FBullCowGame.hpp"

using namespace std;

void PrintIntro();
void PlayGame();
string GetGuess();
bool AskToPlayAgain();


// main is the entry point to the application

int main(int argc, const char * argv[])

{
    bool bPlayAgain = false;
    do
    {
        PrintIntro();
        PlayGame();
        bPlayAgain = AskToPlayAgain();
    }
    while (bPlayAgain);
    return 0;
    
}

// PrintIntro is the initial Game Text
void PrintIntro()
{
    constexpr int WORD_LENGTH = 9;
    cout << "Welcome to Bulls and Cows, a fun word game\n";
    cout << '\n';
    cout << "Can you guess the " << WORD_LENGTH << " letter isogram I'm thinking of?\n";
    cout << endl;
    return;
}

void PlayGame()
{
    // loop for the number of turns asking for guesses
    constexpr int NUMBER_OF_TURNS = 5;
    for (int n=1; n<=NUMBER_OF_TURNS; n++)
    {
        string Guess = GetGuess();
        cout << '\n';
        cout << "Your Guess Was " << Guess;
        cout << '\n';
        cout << '\n';
    }
    cout << '\n';
}

// GetGuess collects the word via user input
string GetGuess()
{
    string Guess = "";
    getline(cin, Guess);
    return Guess;
}

bool AskToPlayAgain()
{
    cout << "Do you want to play again?\n";
    string Response = "";
    getline (cin, Response);
    if ((Response [0] == 'y')||(Response[0]=='Y'))
    {
        cout << "Starting A New Game: \n";
        return true;
    }
    else
        return false;
}
