#include<stdio.h>

int main(){
    int n , value , count = 0 , count1 = 0;
    scanf("%d", &n);
    while(n>0){
        scanf("%d", &value);
        if(value==0){
            count = count+1;
        }else{
            count1 = count1+1;
        }
        n--;
    }
    printf("Inactive Weeks : %d\n", count);
    if(count>=count1){
        printf("Risk Status : High");
    }else{
        printf("Risk Status : Low");
    }
}