#include <stdio.h>

int main() {
    int a;
    float gb;
    scanf("%d", &a);
    scanf("%f", &gb);
    switch(a){
        case(1):
          if(gb<=1){
              printf("Normal Speed");
              break;
          }else{
              printf("Speed Reduced");
              break;
          }
        case(2):
          if(gb<=2){
              printf("Normal Speed");
              break;
          }else if(gb>2){
              printf("Extra Charge Applied");
              break;
          }
        case(3):
              if(gb>=2){
                  printf("Extra Charge Applied");
                  break;
              }
    }
    return 0;
}