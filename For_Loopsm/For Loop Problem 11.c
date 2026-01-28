#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    for(int i = n ; i!=0 ; i/=10){
        int temp = i%10;
        sum = sum+temp;
    }
    printf("%d", sum);
    return 0;
}