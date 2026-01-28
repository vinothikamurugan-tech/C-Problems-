#include <stdio.h>

int main() {
    int hour;
    scanf("%d", &hour);
    if(hour<=1){
        printf("Short Interruption");
    }else if(hour>1 && hour<=4){
        printf("Medium Interruption");
    }else if(hour>4){
        printf("Long Interruption");
    }
    return 0;
}