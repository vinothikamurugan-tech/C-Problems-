#include <stdio.h>

int main() {
    int type, litre;
    scanf("%d", &type);
    scanf("%d", &litre);
    switch(type){
        case(1):
          printf("Fuel Cost ₹%d", litre*105);
          break;
        case(2):
          printf("Fuel Cost ₹%d", litre*92);
          break;
        case(3):
          printf("Fuel Cost ₹%d", litre*85);
          break;
          
    }
    return 0;
}