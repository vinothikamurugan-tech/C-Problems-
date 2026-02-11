#include<stdio.h>

int Digitcount(int n){
    int sum = 0;
    while(n!=0){
        int temp = n%10;
        sum = sum+temp;
        n = n/10;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    int b = Digitcount(n);
    printf("Sum of Digit is %d", b);
    return 0;
}