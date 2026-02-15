// find power of a number using function
#include<stdio.h>

int power(int a , int b){
    int count = 1;
    if(b==0){
        return 1;
    }else{
        for(int i = b ; i>=1 ; i--){
            count = count*a;
        }
    }
    return count;
}

int main(){
    int a , b;
    scanf("%d", &a);
    scanf("%d", &b);
    int result = power(a , b);
    printf("%d Power %d is %d", a , b , result);
    return 0;
}
