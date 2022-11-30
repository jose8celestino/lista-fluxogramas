#include <math.h>
#include <stdio.h>
int s;
int main() {
    printf("huhuhu");
  for (int i = 1; i <= 20; i++) {
    s = s + pow(i, (2 * i));
  }
  printf("%d", s);
  return 0;
}