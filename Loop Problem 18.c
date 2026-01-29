#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int ch = 65+n;
    for(int i = 1; i<=n ; i++){
        for(int j = i; j>0 ; j--){
            printf("%c ", ch-j);
        }
        printf("\n");
    }
}