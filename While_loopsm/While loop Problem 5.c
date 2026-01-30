#include<stdio.h>

int main(){
    int n, value , suc = 0 , rej = 0;
    scanf("%d", &n);
    while(n>0){
        scanf("%d", &value);
        if(value==1){
            suc = suc+1;
        }else if(value==0){
            rej = rej+1;
        }
        n--;
    }
    printf("Successful : %d\n", suc);
    printf("Cancelled : %d\n", rej);
    if(suc>=rej){
        printf("Status : safe");
    }else{
        printf("Status : Risk");
    }
}