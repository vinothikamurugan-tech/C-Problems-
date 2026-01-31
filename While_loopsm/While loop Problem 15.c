#include<stdio.h>

int main(){
    int n , count = 0 , sum = 0 , value;
    scanf("%d", &n);
    while(n>0){
        scanf("%d", &value);
        sum = sum+value;
        if(value>4){
            count = count+1;
        }
        n--;
    }
    printf("Total Overtime : %d\n", sum);
    printf("Burnout Days : %d", count);
}