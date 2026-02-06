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
    int max = 0;
    int index = -1;
    for(int i = 0 ; i<r ; i++){
        int pro = 1;
        for(int j = 0; j<c ; j++){
             pro = pro*a[i][j];
        }
        if(pro>max){
            pro = max;
            index = i;
        }
    }
    printf("Highest Product row is : %d", index);
    return 0;
}