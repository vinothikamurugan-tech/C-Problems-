#include <stdio.h>

int main() {
    int type, unit;
    scanf("%d", &type);
    scanf(" %d", &unit);
    switch(type){
        case(1):
              if(unit<=30){
                  printf("₹%d",unit*5);
                  break;
              }else if(unit>30){
                  printf("₹%d",(30*5)+(unit-30)*8);
                  break;
              }
        case(2):
             printf("₹%d", unit*10);
             break;
              
    }
    return 0;
}