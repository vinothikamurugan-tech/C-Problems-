#include<stdio.h>

int main(){
    int tot , days , value ;
    scanf("%d", &tot);
    scanf("%d", &days);
    int rem = tot;
    int sum = 0, count = 0;
    while(days>0){
        scanf("%d", &value);
        sum = sum+value;
        if(sum<=tot){
            count = count+1;
            rem = rem-value;
        }
        days--;
    }
    printf("Data Used : %d\n", count);
    printf("Remaining Data : %dGB", rem);
}