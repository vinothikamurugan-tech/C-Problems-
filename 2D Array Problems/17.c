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
        int sum = 0;
        for(int j = 0 ; j<c ; j++){
            if(i!=j){
               sum = sum + a[i][j];
            }
        }
        if(sum<a[i][i]){
            count = count+1;
        }
    }
    printf("%d", count);
    return 0;
}