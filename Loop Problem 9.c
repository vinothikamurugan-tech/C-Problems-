#include <stdio.h>

int main() {
    int n, space;
    scanf("%d", &n);
    for(int i = 1; i<=n ; i++){
        for(space = 1; space<=n-i; space++){
            printf(" ");
        }
        for(int j = 1; j<=2*i-1 ; j++){
            printf("*");
        }
        printf("\n");
    }
    for(int i = n; i>=1 ; i--){
        for(space = 1; space<=n-i; space++){
            printf(" ");
        }
        for(int j = 1; j<=2*i-1 ; j++){
            printf("*");
        }
        printf("\n");
    }

    return 0;
}