#include <stdio.h>

int main() {
    int type, amount;
    scanf("%d", &type);
    scanf(" %d", &amount);
    switch(type){
        case(1):
            int a=amount*0.05; 
            printf("₹%d",amount-a);
            break;
        case(2):
             int b = (amount*0.15);
             printf("₹%d",amount-b);
             break;
              
    }
    return 0;
}