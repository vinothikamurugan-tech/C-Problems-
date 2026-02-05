#include<stdio.h>

int main(){
    int r , c , sum = 0 , value;
    scanf("%d", &r);
    scanf("%d", &c);
    int a[r][c];
    for(int i = 0; i<r ; i++){
        for(int j = 0; j<c ; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i<r ; i++){
        for(int j = 0; j<c ; j++){
            int current = a[i][j];
            int count = 0;
            for(int k = 0 ; k<r ; k++){
                for(int m = 0; m<c ; m++){
                    if(current==a[k][m]){
                       count = count+1;
                    }
                }
            }
            if(count>1){
                value = current;
                sum = sum+1;
                break;
            }
        }
        if(sum==1){
            break;
        }
    }
    printf("More then 1 time occurence value is : %d", value);
    return 0;
}