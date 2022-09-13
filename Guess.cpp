#include <iostream>
#include <stdlib.h>
#include <time.h>

using namespace std;

int main () {

  int Number, UserInput, Tries;
  char PlayAgain, Playing;

  PlayAgain = 'y';
  Tries = 1;
  
  do {
  
  srand (time(NULL));

  Number = rand() % 100 + 1;

  do {
  cout << Number << endl;
  cin >> UserInput;
  if (UserInput > Number) {
    cout << "Your guess is higher than the secret number" << endl;
  Tries = Tries + 1;
  }
  else if (Number>UserInput) {
    cout << "Your guess is lower than the secret number" << endl;
  Tries = Tries + 1;
  }
  } while (Number != UserInput);
  cout << "You guessed the correct number! It took you" << Tries << endl;
  cout << "Play again?" << endl;
  cin << PlayAgain;

  if (PlayAgain == 'y') {
  cout << "Playing Again." << endl;
  }
  else if (PlayAgain != 'y') {
  PlayAgain = 'n';
  }
  } while (Playing == 'y');
}
