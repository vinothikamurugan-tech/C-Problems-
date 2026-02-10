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
    int coun = 0;
    for(int i = 0; i<r ; i++){
        int count = 1;
        for(int j = 0; j<c-1 ; j++){
           if(a[i][j]>=a[i][j+1]){
             count = 0;
             break;
           }
        }
        if(count == 1){
           coun = coun+1;
        }
    }
    printf("Count Strictly Increasing Departments %d", coun);
    return 0;
}