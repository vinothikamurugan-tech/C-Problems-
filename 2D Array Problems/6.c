#include<stdio.h>

int main(){
    int r , c , min = 0, max = 0;
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
        for(int j = 0; j<c ; j++){
            sum = sum+a[i][j];
        }
        count++;
        if(count==1){
           min = sum;
           max = sum;
        }
        if(count>1){
            if(sum>max){
                max = sum;
            }
            if(sum<min){
                min = sum;
            }
        }

    }
    printf("Maximun Absolute Difference Between total Expence of any two Department is : %d", max-min);
    return 0;
}