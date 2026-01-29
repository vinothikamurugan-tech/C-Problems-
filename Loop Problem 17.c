#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    for(int i = 1; i<=n ; i++){
        for(int space = 1; space<=n-i ; space++){
            printf(" ");
        }
        int ch = 65;
        int k = 1;
        for(int j = 1; j<=2*i-1 ; j++){
            if(k<=i){
                printf("%c", ch);
             }else{
                --ch;
                printf("%c", --ch);
             }
             ch++;
             k++;
            
        }
        printf("\n");
    }
}