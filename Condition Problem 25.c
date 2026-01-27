#include <stdio.h>

int main() {
    int option;
    scanf("%d", &option);
    int a,b;
    scanf("%d%d", &a, &b);
    switch(option){
        case(1):
          printf("Sum = %d", a+b);
          break;
        case(2):
          printf("Subtract = %d", a-b);
          break;
        case(3):
          printf("Multiplication = %d", a*b);
          break;
        case(4):
          printf("Division = %d", a/b);
          break;
          
    }
    return 0;
}