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
    if(r<2 || c<2){
        printf("0");
        return 0;
    }

    int max = a[0][0]+a[0][1]+a[1][0]+a[1][1];

    for(int i = 0 ; i<r-1 ; i++){
        for(int j = 0; j<c-1 ; j++){
            int sum = (a[i][j]+a[i][j+1]+a[i+1][j]+a[i+1][j+1]);
            if(sum>max){
              max = sum;
            }
        }
        
    }
    printf("Maximum of the 2x2 matrix in the given Array is : %d", max);
    return 0;
}