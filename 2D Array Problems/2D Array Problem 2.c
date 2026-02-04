#include<stdio.h>

int main(){
    int r , c , lar1 , lar2 , sma1 , sma2;
    scanf("%d", &r);
    scanf("%d", &c);
    int a[r][c];
    for(int i = 0; i<r ; i++){
        for(int j = 0; j<c ; j++){
            scanf("%d", &a[i][j]);
        }
    }
    if(a[0][0]>a[0][1]){
        lar1 = a[0][0];
        lar2 = a[0][1];
    }else if(a[0][0]==a[0][1]){
        lar1 = a[0][0];
        lar2 = a[0][1];
    }else{
        lar1 = a[0][1];
        lar2 = a[0][0];
    }
    for(int i = 0 ; i<r ; i++){
        for(int j = 0 ; j<c ; j++){
            if(a[i][j]>lar1){
                lar2 = lar1;
                lar1 = a[i][j];
            }else if(a[i][j]<lar1 && a[i][j]>lar2){
                lar2 = a[i][j];
            }
        }
    }
    int max1 = lar1*lar2;

    if(a[0][0]<a[0][1]){
        sma1 = a[0][0];
        sma2 = a[0][1];
    }else if(a[0][0]==a[0][1]){
        sma1 = a[0][0];
        sma2 = a[0][1];
    }else{
        sma1 = a[0][1];
        sma2 = a[0][0];
    }
    for(int i = 0 ; i<r ; i++){
        for(int j = 0 ; j<c ; j++){
            if(a[i][j]<sma1){
                sma2 = sma1;
                sma1 = a[i][j];
            }else if(a[i][j]>sma1 && a[i][j]<sma2){
                sma2 = a[i][j];
            }
        }
    }
    int max2 = sma1*sma2;

    if(max1>max2){
        printf("Product of 2 element in the array is : %d", max1);
    }else{
        printf("Product of 2 element in the array is : %d", max2);
    }

}