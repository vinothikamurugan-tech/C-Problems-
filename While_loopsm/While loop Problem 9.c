#include<stdio.h>

int main(){
    int tot , n , value , sum = 0 , count = 0;
    scanf("%d", &tot);
    scanf("%d", &n);
    int rem = tot;
    while(n>0){
        scanf("%d", &value);
        sum = sum+value;
        if(sum<=tot){
            count = count+1;
            rem = rem - value;
        }
        n--;
    }
    printf("Completed Trips : %d\n", count);
    printf("Remaining Fuel : %d", rem);
}