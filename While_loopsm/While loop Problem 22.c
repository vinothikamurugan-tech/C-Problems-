#include<stdio.h>

int main(){
    int n , value , count = 0 , count1 = 0, count2 = 0 , min = 0 ;
    scanf("%d", &n);
    int index = 0;
    while(n>0){
        scanf("%d", &value);
        if(value==0){
            count++;
        }
        count1++;
        if(value==0){
            count2++;
            if(min<count2){
                min = count2;
                if(min==3){
                  index = count1;
                }
            }
        }else{
            count2 = 0;
        }
        n--;
    }
    if(index>0){
         printf("Lock Triggered At Attempt : %d\n", index);
    }else{
        printf("Lock Triggered At Attempt : Not Locked\n");
    }
    printf("Total Failed Attempts : %d", count);
}