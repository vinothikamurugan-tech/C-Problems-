#include<stdio.h>

int main(){
    int r , c ;
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
        int even = 0;
        int odd = 0;
        for(int j = 0; j<c ; j++){
            if(a[i][j]%2==0){
                even = even+1;
            }else{
                odd = odd+1;
            }
        }
        if(odd==even){
            count = count+1;
        }
    }
    printf("Balenced row is : %d", count);
    return 0;
}