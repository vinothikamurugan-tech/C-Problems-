#include<stdio.h>

int main(){
    int n , max = 0 , count = 0 , value;
    scanf("%d", &n);
    while(n>0){
        scanf("%d", &value);
        if(value>5){
            count = count+1;
        }
        if(max<value){
            max = value;
        }
        n--;
    }
    printf("Max Usage : %d\n", max);
    printf("Surge Hours : %d", count);
}