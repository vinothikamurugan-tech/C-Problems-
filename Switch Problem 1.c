#include <stdio.h>

int main() {
    int type, unit;
    scanf("%d", &type);
    scanf("%d", &unit);
    int bill;
    switch(type){
        case(1):
          if(unit>=1 && unit<=100){
              bill = unit*3;
              printf("Bill ₹%d", bill);
              break;
          }else if(unit>=101){
              int tot = 100*3;
              int tot1 = (unit-100)*5;
              bill = tot+tot1;
          }
          printf("Bill  ₹%d", bill-80);
          break;
        case(2):
          if(unit>=1 && unit<=100){
              bill = unit*7;
          }else if(unit>=101){
              int tot1 = 100*7;
              int tot2 = (unit-100)*10;
              bill = tot1+tot2;
          }
          printf("Bill  ₹%d", bill);
          break;
    }
    return 0;
}