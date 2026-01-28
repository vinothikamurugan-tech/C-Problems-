#include <stdio.h>

int main() {
    int type, time;
    scanf("%d", &type);
    scanf(" %d", &time);
    switch(type){
        case(1):
              printf("Full Access");
              break;
        case(2):
               if(time>=9 && time<=20){
                   printf("Limited Access");
                   break;
               }else if(time>20){
                   printf("Access Denied");
                   break;
               }
    }
    return 0;
}