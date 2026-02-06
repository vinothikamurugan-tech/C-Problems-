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
    int mincount = 1;
    int value;
    for(int i = 0; i<r ; i++){
        for(int j = 0; j<c ; j++){
            int count = 0;
            int now = a[i][j];
            for(int k = 0; k<r ; k++){
                for(int m = 0 ; m<c ; m++){
                    if(now == a[k][m]){
                        count = count +1;
                    }
                }
            }
            if(count > mincount){
                value = now;
                mincount = count ;
            }

        }
    }
    printf("Maximum Frequency Value is : %d", value);
    return 0;

}
