#include <stdio.h>

int main() {
    int tot , n , sum = 0, count = 0 , value;
    scanf("%d", &tot);
    scanf("%d", &n);
    int rem = tot;
    while(n>0){
        scanf("%d", &value);
        sum = sum + value;
        if(sum<tot){
            count = count+1;
            rem = rem - value;
        }
        n--; 
    }
    printf("Successful Purchases : %d\n", count);
    printf("Final Balance : %d", rem);
    return 0;
}