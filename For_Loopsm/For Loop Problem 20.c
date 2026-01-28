#include <stdio.h>

int main() {
       int a ;
       scanf("%d", &a);
       int sum = 0;
       for(int i = 1; i<=a ; i++){
           int temp = i*i;
           sum = sum+temp;
       }
       printf("%d", sum);
       return 0;
}