#include <stdio.h>

int main() {
    int type;
    int late;
    scanf("%d", &type);
    scanf("%d", &late);
    switch(type){
        case(1):
          printf("Late Fee ₹%d", late*2);
          break;
        case(2):
          printf("Late Fee ₹%d", late*5);
          break;
          
    }
    return 0;
}