#include <stdio.h>

int main() {
  int a,b;
  scanf("%d%d", &a, &b);
  int small = (a>b)? b : a;
  printf("%d is smallest", small);
  return 0;
}