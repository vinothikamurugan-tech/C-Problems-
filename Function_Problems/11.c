// Count Digits in a Number Using function
#include<stdio.h>

int digit_count(int n){
    int count = 0;
    while(n!=0){
        count = count +1;
        n = n/10;
    }
    return count;
}

int main(){
    int n;
    scanf("%d", &n);
    int a = digit_count(n);
    printf("The Digit Count is : %d", a);
    return 0;
}