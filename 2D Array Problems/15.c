#include<stdio.h>

int main(){
    int r , c;
    scanf("%d", &r);
    scanf("%d", &c);
    int a[r][c];
    int count = 0;
    for(int i = 0; i<r ; i++){
        for(int j = 0; j<c ; j++){
            scanf("%d", &a[i][j]);
            int value = a[i][j];
            if(value>1){
                if(value==2 || value==3 || value==5 || value==7){
                    count = count+1;
                }else if(value%value==0 && value%1==0 && value%2!=0 && value%3!=0 && value%5!=0){
                    count = count+1;
                }
            }
        }
    }
    printf("Count of Prime Number in the given Array is : %d", count);
    return 0;

}