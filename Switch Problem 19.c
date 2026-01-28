#include <stdio.h>

int main() {
    int type, km;
    scanf("%d", &type);
    scanf(" %d", &km);
    switch(type){
        case(1):
              if(km<=30){
                  printf("Eligible");
                  break;
              }else if(km>30){
                  printf("Eligible with Extra Fee");
                  break;
              }
        case(2):
               if(km<=30){
                   printf("Eligible");
                   break;
               }else if(km>30){
                   printf("Not Eligible");
                   break;
               }
        case(3):
              printf("Eligible");
              break;
    }
    return 0;
}