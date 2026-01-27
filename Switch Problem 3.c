#include <stdio.h>

int main() {
    int type, balance, withdraw;
    scanf("%d", &type);
    scanf("%d", &balance);
    scanf("%d", &withdraw);
    switch(type){
        case(1):
           if(balance>=withdraw){
               printf("Transaction Successfull");
               break;
           }else{
               printf("Insufficient Balance");
               break;
           }
        case(2):
           if(withdraw>5000){
               printf("Limit Exceeded");
               break;
           }else{
               printf("Transaction Successful");
               break;
           }
    }
    return 0;
}