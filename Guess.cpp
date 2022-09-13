#include <cstddef>
#include <cstdio>
#include <time.h>
#include <stdlib.h>


int Number;

int main () {

  int Number;

  srand (time(NULL));

  Number = rand() % 100 + 1;
  
  printf (Number);

  
}
