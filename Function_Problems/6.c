// Factorial Of a Given Number
#include<stdio.h>

int fact(int n){
    int value = 1;
    if(n==0){
       value = 1;
    }else{
        for(int i = 1 ; i<=n ; i++){
            value = value*i;
        }
    }
    return value;
}

int main(){
    int n;
    scanf("%d", &n);
    int a = fact(n);
    printf("Factorial of a %d is %d", n , a);
    return 0;
}