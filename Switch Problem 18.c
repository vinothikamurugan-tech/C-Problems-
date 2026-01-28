#include <stdio.h>

int main() {
    int type, mark;
    scanf("%d", &type);
    scanf(" %d", &mark);
    switch(type){
        case(1):
              if(mark>=80){
                  printf("Excellent");
                  break;
              }else{
                  printf("Not Qualified");
                  break;
              }
        case(2):
               if(mark>=60){
                   printf("Good");
                   break;
               }else{
                   printf("Not Qualified");
                   break;
               }
        case(3):
              printf("Needs Improvement");
              break;
    }
    return 0;
}