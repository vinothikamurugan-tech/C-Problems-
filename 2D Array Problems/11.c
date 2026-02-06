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
        for(int j = 0; j<1 ; j++){
            int min = a[i][j];
            int dec = 1;
            for(int k = 1; k<c ; k++){
                if(min>a[i][k]){
                    dec = 0;
                    break;
                }else{
                     min = a[i][k];
                }
            }
            if(dec==1){
                count = count +1;
            }
            
        }
    }
    printf("Number of Sorted Rows : %d", count);
    return 0;
}