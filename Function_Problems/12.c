// Check wether the year is leap year or not
#include<stdio.h>

int leap(int n){
    if((n%4==0 && n%100!=0) || n%400==0){
        printf("%d is a Leap Year", n);
    }else{
        printf("Not a Leap Year");
    }
}

int main(){
    int n;
    scanf("%d", &n);
    leap(n);
    return 0;
}