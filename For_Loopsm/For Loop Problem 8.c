#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int rev = 0;
    for(int i = n; i!=0 ; i/=10){
       int temp = i%10;
       rev = rev*10+temp;
    }
    printf("%d", rev);
    return 0;
}