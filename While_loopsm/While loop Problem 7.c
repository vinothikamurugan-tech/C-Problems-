#include <stdio.h>

int main() {
    int capacity , n , value , count = 0;
    scanf("%d", &capacity);
    scanf("%d", &n);
    int sum = 0;
    int percentage = capacity*0.90;
    while(n>0){
        scanf("%d", &value);
        sum = sum+value;
        if(sum>percentage){
            count = count+1;
        }
        n--;
    }
    printf("Final Occupied Beds : %d\n", sum);
    printf("Critical Hours : %d", count);

    return 0;
}