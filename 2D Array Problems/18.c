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
    int max = -1;
    for(int i = 0; i<r ; i++){
        for(int j = 0; j<c ; j++){
            int now = a[i][j];
            for(int k = 0; k<r ; k++){
                if(k!=i){
                    for(int m = 0; m<c ; m++){
                       int diff = a[i][j]-a[k][m];
                       if(diff>max){
                          max = diff;
                       }
                    }
                }
            }
        }
    }
    printf("Maximun Absolute Difference Between Two Department is : %d", max);
    return 0;
}