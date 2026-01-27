#include <stdio.h>

int main() {
    int plan, paymentmode;
    scanf("%d", &plan);
    scanf("%d", &paymentmode);
    switch(plan){
        case(1):
          if(paymentmode==11 || paymentmode==12){
              printf("Pay ₹%d", 199-20);
              break;
          }else{
              printf("Pay ₹199");
          }
        case(2):
          if(paymentmode==11 || paymentmode==12){
              printf("Pay ₹%d", 399-20);
              break;
          }else{
              printf("Pay ₹399");
          }
    }
    return 0;
}