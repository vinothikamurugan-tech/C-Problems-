#include <stdio.h>

int main() {
    int unit, bill;
    scanf("%d", &unit);
    if(unit>100){
        bill = unit*5;
    }
    printf("Rs.%d", bill);

    return 0;
}