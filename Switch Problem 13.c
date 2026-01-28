#include <stdio.h>

int main() {
    int type, score;
    scanf("%d", &type);
    scanf("%d", &score);
    switch(type){
        case(1):
          if(score>=700){
              printf("Approved");
              break;
          }else if(score>=650 && score<=699){
              printf("Manual Review");
              break;
          }
        case(2):
          if(score>=700){
              printf("Approved");
              break;
          }else if(score<700){
              printf("Rejected");
              break;
          }
    }
    return 0;
}