#include<stdio.h>

int main(){
    int r , c;
    scanf("%d", &r);
    scanf("%d", &c);
    int a[r][c];
    for(int i = 0; i<r ; i++){
        for(int j = 0; j<c ; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int count = 0;
    for(int i = 0; i<r ; i++){
        for(int j = 0; j<=0 ; j++){
            int p = 0;
            int q = c-1;
            int pal = 1;
            while(p<q){
                if(a[i][p]!=a[i][q]){
                     pal = 0;
                     break;
                }
                p++;
                q--;
            }
            if(pal==1){
                count = count + 1 ;
            }
        }
    }
    printf("The Count of Palindromic Rows is : %d", count);
    return 0;
}