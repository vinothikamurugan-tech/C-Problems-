#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int count = 0;
    for(int i = n; i!=0 ; i/=10){
       int temp = i%10;
       count = count+1;
    }
    printf("%d", count);
    return 0;
}