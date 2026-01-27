#include <stdio.h>

int main() {
    int code, year;
    scanf("%d", &code);
    scanf("%d", &year);
    switch(code){
        case(1):
          if(year>=3){
              int amount = year*5000;
              printf("Salary ₹%d",amount+50000);
              break;
          }else{
              printf("Salary ₹%d",50000);
              break;
          }
        case(2):
          if(year>=3){
              int amount = year*5000;
              printf("Salary ₹%d",amount+35000);
              break;
          }else{
              printf("Salary ₹%d",35000);
              break;
          }
    }
    return 0;
}