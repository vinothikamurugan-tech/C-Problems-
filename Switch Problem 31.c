#include <stdio.h>

int main() {
    int type;
    scanf("%d", &type);
    switch(type){
        case(1):
          printf("Membership Fee ₹1500");
          break;
        case(2):
          printf("Membership Fee ₹4000");
          break;
        case(3):
          printf("Membership Fee ₹7000");
          break;
          
    }
    return 0;
}