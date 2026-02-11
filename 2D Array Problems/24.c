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
    int tot = 0;
    for(int i = 0; i<r ; i++){
        int count = 0;
        for(int j = 0; j<c ; j++){
            if(a[i][j]==2 || a[i][j]==3 || a[i][j]==5){
                count = count +1 ;
            }else if(a[i][j]%1==0 && a[i][j]%a[i][j]==0 && a[i][j]%2!=0 && a[i][j]%3!=0 && a[i][j]%5!=0){
                count = count+1;
            }
            if(count==c){
               tot = tot+1;
            }
        }
    }
    printf("There are %d Departments Containing Only Prime Numbers", tot);
    return 0;
}