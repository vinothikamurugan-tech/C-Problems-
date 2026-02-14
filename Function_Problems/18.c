// GCD of two Numbers using Function
#include<stdio.h>

int GCD(int a, int b , int min){
    int gcd = 1 ;
    for(int i = 1; i<=min ; i++){
        if(a%i==0 && b%i==0){
            gcd = i;
        }
    }
    return gcd;
}

int main(){
    int a , b;
    scanf("%d", &a);
    scanf("%d", &b);
    int min;
    if(a<b){
        min = a;
    }else{
        min = b;
    }
    int gcd = GCD(a , b , min);
    printf("GCD is : %d", gcd);
    return 0;
}