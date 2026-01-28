#include <stdio.h>

int main() {
    int type, trip;
    scanf("%d", &type);
    scanf("%d", &trip);
    switch(type){
        case(1):
           if(trip==1){
               printf("₹100");
               break;
           }else if(trip>=2){
               printf("₹800");
               break;
           }
        case(2):
           printf("₹%d", trip*240);
           break;
    }

    return 0;
}