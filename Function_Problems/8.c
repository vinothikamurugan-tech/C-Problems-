// Reverse a Number
#include<stdio.h>

int reverse(int n){
    int rev = 0;
    while(n!=0){
        int temp = n%10;
        rev = (rev*10)+temp;
        n = n/10;
    }
    return rev;
}

int main(){
    int n ;
    scanf("%d", &n);
    int a = reverse(n);
    printf("Reverse of the Number is %d", a);
    return 0;
}