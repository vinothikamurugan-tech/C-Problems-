#include <stdio.h>

int main() {
    int days;
    scanf("%d", &days);
    if(days<=5){
         printf("₹%d",days*50);
    }else if(days>5 && days<=10){
        printf("₹%d",days*100);
    }else if(days>10){
        printf("₹%d",days*200);
    }
    return 0;
}