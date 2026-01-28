#include <stdio.h>

int main() {
       int n;
       scanf("%d", &n);
       int sum = 0;
       for(int i = n ; i!=0 ; i/=10){
           int temp = i%10;
           int fact = 1;
           for(int i = 1;i<=temp; i++){
               fact = fact*i; 
           }
           sum = sum+fact;
       }
       if(sum==n){
           printf("Yes");
       }else{
           printf("No");
       }
       return 0;
}