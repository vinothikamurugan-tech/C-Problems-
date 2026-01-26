#include <stdio.h>

int main() {
   int a = 5;
   int b = 7;
   printf("%d\n", a&&b );
   
   int c = 10;
   int d = 5;
   printf("%d\n", c&&d);
   
   int e = 0;
   int f = 9;
   printf("%d\n", e&&f);
   return 0;
}