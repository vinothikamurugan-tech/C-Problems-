#include <stdio.h>

int main() {
   int a = 10;
   int b = 5;
   printf("%d\n", a-=b);
   
   int c = 20;
   int d = 10;
   printf("%d\n", c-=d);
   
   int e = 5;
   int f = 5;
   printf("%d\n", e-=f);
   return 0;
}