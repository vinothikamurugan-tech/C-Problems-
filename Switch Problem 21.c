#include <stdio.h>

int main() {
    int type, time;
    scanf("%d", &type);
    scanf(" %d", &time);
    switch(type){
        case(1):
              if(time>=18){
                  printf("Ticket Price ₹%d",150+50);
                  break;
              }else{
                  printf("Ticket Price ₹150");
                  break;
              }
        case(2):
               if(time>=18){
                  printf("Ticket Price ₹%d", 250+50);
                  break;
               }else{
                   printf("Ticket Price ₹250");
                   break;
               }
    }
    return 0;
}