#include <stdio.h>
int main() {
  int i, j, x, y, k, hcf, lcm;
  printf("Enter two integers\n");
  scanf("%d%d", &x, &y);
  i = x;
  j = y;
  while (j != 0) {
    k = j;
    j = i % j;
    i = k;
  }
  hcf = i;
  lcm = (x*y)/hcf;
  printf("highest common factor of %d and %d = %d\n", x, y, hcf);
  printf("Least common multiple of %d and %d = %d\n", x, y, lcm);
  return 0;
}