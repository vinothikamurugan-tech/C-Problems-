#include<stdio.h>

int main(){
    int r , c;
    scanf("%d", &r);
    scanf("%d", &c);
    int a[r][c];
    for(int i = 0; i<c ;i++){
        for(int j = 0; j<c ; j++){
            scanf("%d", &a[i][j]);
        }
    }
    int count = 0;
    for(int i = 0; i<r ; i++){
        int max = 0, min = 0 , cou = 0;
        for(int j = 0; j<c ; j++){
            if(a[i][j]>max){
                max = a[i][j];
            }
            cou++;
            if(cou==1){
                min = a[i][j];
            }
            if(cou>1){
                if(min>a[i][j]){
                    min = a[i][j];
                }
            }
            
        }
        if(max-min<1000){
            count = count+1;
        }
    }
    printf("The row max-min is less then 1000 row count is %d", count);
    return 0;
}