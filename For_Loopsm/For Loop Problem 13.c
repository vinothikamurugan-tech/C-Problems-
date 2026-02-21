#include <stdio.h>

int main() {
    int n , m;
    scanf("%d", &n);
    scanf("%d", &m);
    int sum = 0;
    for(int i = 1; i<=10 ; i++){
        int mul = i*n;
        if(mul<=m){
            sum = sum+mul;
        }
    }
    printf("%d", sum);
    return 0;
}
