#include <stdio.h>

int main() {
    int type;
    char ch;
    scanf("%d", &type);
    scanf(" %c", &ch);
    switch(type){
        case(1):
          if(ch=='R'){
              printf("₹5000");
              break;
          }else if(ch=='S'){
              printf("₹3000");
              break;
          }
          case(2):
          if(ch=='R'){
              printf("₹9000");
              break;
          }else if(ch=='S'){
              printf("₹7000");
              break;
          }
        
    }
    return 0;
}