#include<stdio.h>
#include<math.h>

int main() {
       int n ;
       scanf("%d", &n);
       int sum = 0;
       int product;
       int power = 0;
       for(int i = n; i!=0; i/=10){
           int temp = i%10;
           product = temp*(pow(2,power));
           power++;
           sum = sum+product;
       }
       printf("%d", sum);
       
       return 0;
}