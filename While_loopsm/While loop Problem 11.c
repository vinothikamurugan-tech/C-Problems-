#include<stdio.h>

int main(){
    int n , value , sum = 0 , count = 0;
    scanf("%d", &n);
    while(n>0){
        scanf("%d", &value);
        sum = sum + value;
        if(value>2){
            count = count+1;
        }
        n--;
    }
    printf("Total Delay : %d\n", sum);
    printf("Delayed Days : %d", count);
}