/*
No global variables.
No strings, ever. cstrings and characters arrays are fine.
I should include <iostream> not <stdio>
*/


#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main () {

  // Initialize the secret number, user input logger, as well as the variable that keeps track of how many tries it took the user.
  int Number, UserInput, Tries;
  // Initialize the playing again variable.
  char PlayAgain;

  // Set the game to be able to be played for the first round.
  PlayAgain = 'y';
  
  do {

    Tries = 0;    
  srand (time(NULL));

  Number = rand() % 100 + 1;
  cout << "The number has been generated. Try to guess it!" << endl;
  do {

    PlayAgain = 'n';
    cout << Number << endl;
    //cout << "The number has been generated. Try to guess it!" << endl;
  cin >> UserInput;
  // If the user's input is higher than the secret n umber.
  if (UserInput > Number) {
    cout << "Your guess is higher than the secret number" << endl;
  Tries = Tries + 1;
  } // If the number is greater than the user's guess.
  else if (Number>UserInput) {
    cout << "Your guess is lower than the secret number" << endl;
  Tries = Tries + 1;
  } // Repeat this process until the user can corrrectly guess the number.
  } while (Number != UserInput);
  Tries = Tries + 1;
  cout << "You guessed the correct number! It took you " << Tries << " tries." << endl;
  cout << "Play again? (y/n)" << endl;
  // Check to see if the user wants to play again.
  cin >> PlayAgain;
 
  if (PlayAgain == 'y') {
  cout << "Playing Again." << endl;
  }
  else if (PlayAgain != 'y') {
  PlayAgain = 'n';
  }// As long as the user tells the program they want to play again, they will be able to until a different input is given.
  } while (PlayAgain == 'y');
}
