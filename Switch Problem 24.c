#include <stdio.h>

int main() {
    int type, time;
    scanf("%d", &type);
    scanf(" %d", &time);
    switch(type){
        case(1):
            printf("₹%d",time*1);
            break;
        case(2):
             printf("₹%d",time*3);
             break;
        case(3):
             printf("₹%d",time*10);
             break;
              
    }
    return 0;
}