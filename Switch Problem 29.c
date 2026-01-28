#include <stdio.h>

int main() {
    int type, dis;
    scanf("%d", &type);
    scanf("%d", &dis);
    switch(type){
        case(1):
          printf("₹%d", dis*10);
          break;
        case(2):
          printf("₹%d", dis*15);
          break;
        case(3):
          printf("₹%d", dis*20);
          break;
          
    }
    return 0;
}