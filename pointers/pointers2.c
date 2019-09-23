#include <stdio.h>

void main(void) {
  int target, source;
  int *m;

  source = 710;
  m = &source;
  target = *m;

  printf("%d", target);
}