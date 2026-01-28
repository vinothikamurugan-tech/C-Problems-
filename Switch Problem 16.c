#include <stdio.h>

int main() {
    int type, kg;
    scanf("%d", &type);
    scanf(" %d", &kg);
    switch(type){
        case(1):
              printf("Extra Baggage Charge ₹%d", kg*300);
              break;
          case(2):
              if(kg<=3){
                  printf("Free");
                  break;
              }else{
                  printf("Extra Baggage Charge ₹%d",(kg-3)*300);
                  break;
              }
    }
    return 0;
}