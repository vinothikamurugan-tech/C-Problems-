#include <stdio.h>

int main() {
    int type, hour;
    scanf("%d", &type);
    scanf(" %d", &hour);
    switch(type){
        case(1):
              printf("Parking Fee ₹%d", hour*10);
              break;
        case(2):
              printf("Parking Fee ₹%d", hour*20);
              break;
        default:
              printf("Parking Fee ₹%d", hour*20);
              break;
    }
    return 0;
}