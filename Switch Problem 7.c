#include <stdio.h>

int main() {
    int type, years;
    scanf("%d", &type);
    scanf("%d", &years);
    switch(type){
        case(1):
          printf("Interest 4%%");
          break;
        case(2):
          if(years<=3){
              printf("Interest 5%%");
              break;
          }else if(years>3){
              printf("Interest 7%%");
              break;
          }
    }
    return 0;
}