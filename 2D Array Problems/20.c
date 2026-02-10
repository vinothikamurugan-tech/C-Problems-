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
    int index , count1;
    for(int i = 0 ; i<r ; i++){
        for(int j = 0; j<c ; j++){
            int count = 0;
            for(int k = 0; k<r ; k++){
                for(int m = 0; m<c ; m++){
                    if(a[i][j]==a[k][m]){
                        count = count+1;
                    }
                }
            }
            if(count == 1){
                index = a[i][j];
                count1 = 1;
                break;
            }
        }
        if(count1 == 1){
            break;
        }
    }
    printf("First Non-repeating element is : %d", index);
    return 0;
}