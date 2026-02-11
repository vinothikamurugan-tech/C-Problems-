#include<stdio.h>

int greater(int a , int b){
    int max;
    if(a>b){
        max = a;
    }else{
        max = b;
    }
    return max;
}

int main(){
    int a , b;
    scanf("%d%d", &a , &b);
    int c = greater(a , b);
    printf("Greater Number is %d", c);
    return 0;
}