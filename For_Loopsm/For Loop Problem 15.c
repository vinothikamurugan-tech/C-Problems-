#include <stdio.h>

int main() {
       int n;
       scanf("%d", &n);
       int count = 0;
       for(int i = 2; i<=n ; i++){
           if(i==2 || i==3 || i==5){
               count = count+1;
           }else{
               if(i%i==0 && i%1==0 && i%2!=0 && i%3!=0 && i%5!=0){
                   count = count+1;
               }
           }
       } 
       printf("%d", count);
       return 0;
}