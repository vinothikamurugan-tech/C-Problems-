#include<stdio.h>

int main(){
    int tot , n , sum = 0 , value , count = 0;
    scanf("%d", &tot);
    scanf("%d", &n);
    int rem = tot;
    while(n>0){
        scanf("%d", &value);
        sum = sum+value;
        if(sum<tot){
            count = count+1;
            rem = rem-value;
        }
        n--;
    }
    printf("Successful Withdrawals : %d\n", count);
    printf("Remaining Cash : %d", rem);
}