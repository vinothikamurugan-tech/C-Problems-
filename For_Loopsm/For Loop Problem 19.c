#include <stdio.h>

int main() {
       int a , b , lcm;
       scanf("%d", &a);
       scanf("%d", &b);
       for(int i = 1; i<=a*b; i++){
           if(i%a==0 && i%b==0){
               lcm = i;
               printf("%d", i);
               break;
           }
       }
       return 0;
}