#include<stdio.h>

int main(){
    int r , c ,tot = 0;
    scanf("%d", &r);
    scanf("%d", &c);
    int a[r][c];
    for(int i = 0; i<r ; i++){
        for(int j = 0; j<c ; j++){
            scanf("%d", &a[i][j]);
        }
    }
    for(int i = 0; i<r ; i++){
        int count = 0;
        for(int j = 0; j<c ; j++){
            int dup = 0;
            for(int k = 0; k<j ; k++){
                if(a[i][k]==a[i][j]){
                    dup = 1;
                    break;
                }
            }
            if(!dup){
                count++;
            }
        }
        if(count==c){
           tot = tot+1;
        }
    }
    printf("Unique Row : %d", tot);
    return 0;
}