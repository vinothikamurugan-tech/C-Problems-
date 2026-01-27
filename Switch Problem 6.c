#include <stdio.h>

int main() {
    int type, amount;
    scanf("%d", &amount);
    scanf("%d", &type);
    switch(type){
        case(1):
          printf("Delivery Charge ₹50");
          break;
        case(2):
          if(amount<1000){
              printf("Delivery Charge ₹100");
              break;
          }else if(amount>=1000){
              printf("Free Delivery");
              break;
          }
    }
    return 0;
}