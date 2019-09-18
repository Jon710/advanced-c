#include <stdlib.h>
#include <stdio.h>

int main() {

  char line[255];
  FILE * fpointer = fopen("employees.txt", "r");

  //fgets to read it
  // line = first parameter that stores info
  fgets(line, 255, fpointer);
  fgets(line, 255, fpointer);
  printf("%s", line);

  fclose(fpointer);
  return 0;
}