#include <stdio.h>

int main() {
    int type;
    scanf("%d", &type);
    switch(type){
        case(1):
          printf("Under Warranty");
          break;
        case(2):
          printf("Limited Warranty");
          break;
        case(3):
          printf("Out of Warranty");
          break;
          
    }
    return 0;
}