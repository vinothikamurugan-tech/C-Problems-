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
    int min , count , index;
    for(int i = 0; i<r ; i++){
        int sum = 0;
        for(int j = 0; j<c ; j++){
            sum = sum + a[i][j];
        }
        if(sum!=0){
            count++;
            if(count==1){
                min = sum;
                index = i;
            }else if(count>1){
                if(min>sum){
                    min = sum;
                    index = i;
                }
            }
        }
    }
    printf("Smallest Sum Without Sum=0, Row Index Position is ; %d", index);
    return 0;
    
}