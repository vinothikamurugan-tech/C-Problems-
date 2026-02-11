// Check the given number is even or odd
#include<stdio.h>

int evenodd(int a){
    if(a%2==0){
        printf("%d is Even", a);
    }else{
        printf("%d is Odd", a);
    }
}

int main(){
    int a;
    scanf("%d", &a);
    int b = evenodd(a);
    return 0;
}