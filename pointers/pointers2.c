#include <stdio.h>

void main(void) {
  int target, source;
  int *m = 0;

  source = 710;
  m = &source; // m agora tem o endereço de source.
  target = *m; // agora target aponta pro que tem no endereço de m

  printf("%d\n", target);
  printf("%d\n", &source);
  printf("%d\n", m);
}