#include<stdio.h>

int main(){
    int n , initial, value;
    scanf("%d", &n);
    scanf("%d", &initial);
    int count = 0;
    while(n>0){
        scanf("%d", &value);
        if(value>0){
            initial = initial+value;
            if(value<2000){
                count = count+1;
            }
        }else if(value<0){
            initial = initial+value;
        }
        n--;
    }
    printf("Final Balance : %d\n", initial);
    printf("Low Balance Day : %d", count);
}
