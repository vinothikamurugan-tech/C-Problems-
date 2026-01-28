#include <stdio.h>

int main() {
    int type, age;
    scanf("%d", &type);
    scanf("%d", &age);
    switch(type){
        case(1):
          if(age<=5){
              printf("₹1500");
              break;
          }else if(age>5){
              printf("₹2500");
              break;
          }
          case(2):
          if(age<=5){
              printf("₹4000");
              break;
          }else if(age>5){
              printf("₹6000");
              break;
          }
        
    }
    return 0;
}