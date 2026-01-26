#include <stdio.h>

int main() {
   int a = 4;
   int b = 5;
   printf("%d\n", a*=b);
   
   int c = 3;
   int d = 3;
   printf("%d\n", c*=d);
   
   int e = 10;
   int f = 2;
   printf("%d\n", e*=f);
   return 0;
}