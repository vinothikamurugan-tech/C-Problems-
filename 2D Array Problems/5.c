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
    int small = 0;
    int count = 0;
    int index = -1;
    for(int i = 0; i<r ; i++){
        int sum = 0;
        for(int j = 0; j<c ; j++){
            sum = sum+a[i][j];
        }
        int avg = sum/c;
        count++;
        if(count==1){
            small = avg;
            index = i;
        }
        if(count>1){
            if(small>avg){
                small = avg;
                index = i;
            }
        }
    }
    printf("Index of the Lowest Average Row : %d", index);
    return 0;
}