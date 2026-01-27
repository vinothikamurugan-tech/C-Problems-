#include <stdio.h>

int main() {
    int a,b;
    char ope;
    scanf("%d %c %d", &a, &ope , &b);
    switch(ope){
        case '+':
          printf("Result = %d", a+b);
          break;
        case '-':
          printf("Result = %d", a-b);
          break;
        case '*':
          printf("Result = %d", a*b);
          break;
        case '/':
           if(b!=0){
             printf("Result = %d", a/b);
           }else{
               printf("Division by zero is not allowed");
           }
          break;
        case '%':
          printf("Result = %d", a%b);
          break;
        
    }
    return 0;
}