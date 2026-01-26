#include <stdio.h>

int main() {
   int a = 9;
   int b = 2;
   int x = a;
   int y = a;
   printf("%d %d\n", x/=b , y%=b);
   
   int c = 10;
   int d = 5;
   int x1 = c;
   int x2 = c;
   printf("%d %d\n", x1/=d , x2%=d);
   
   int e = 7;
   int f = 3;
   int y1 = e;
   int y2 = e;
   printf("%d %d\n", y1/=f , y2%=f);
   return 0;
}