// Check The Given Number is Prime or not
#include<stdio.h>

int prime(int n){
    if(n==2 || n==3 || n==5){
        printf("Prime");
    }else if(n%1==0 && n%n==0 && n%2!=0 && n%3!=0 && n%5!=0){
        printf("Prime");
    }else{
        printf("Not Prime");
    }
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    prime(n);
    return 0;
}