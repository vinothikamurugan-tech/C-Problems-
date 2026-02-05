#include<stdio.h>

int main(){
    int r , c ;
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
        for(int j = 0; j<c ; j++){
            int now = a[i][j];
            int row = 1;
            for(int k = 0 ; k<c ; k++){
                if(now>a[i][k]){
                    row = 0;
                    break;
                }
            }
            int column = 1;
            for(int m = 0 ; m<r ; m++){
                if(now<a[m][j]){
                    column = 0;
                    break;
                }
            }
            if(row && column){
                count = count+1;
            }
        }
    }
    printf("%d", count);
    return 0;
}