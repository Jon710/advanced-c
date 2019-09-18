#include <stdlib.h>
#include <stdio.h>

int main() {

  // create file employees.txt and fpointer points to its memory address
  FILE * fpointer = fopen("employees.txt", "a");

  //WRITE info into file
  fprintf(fpointer, "\nCristiano Ronaldo, GOAT");

  fclose(fpointer);
  return 0;
}