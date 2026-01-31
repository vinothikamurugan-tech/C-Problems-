#include<stdio.h>

int main(){
    int n , value , count = 0 , min = 0 , count1 = 0 , min2 = 0;
    scanf("%d", &n);
    while(n>0){
        scanf("%d", &value);
        if(value>20){
           count = count+1; 
        }
        if(value>20 && value>min){
            count1++;
            if(min2<count1){
                min2 = count1;
            }
        }else{
            count1 = 0;
            min = 0;
        }
        n--;
    }
    printf("Congestion Minutes : %d\n", count);
    printf("Longest Congestion Streak : %d", min2);
}