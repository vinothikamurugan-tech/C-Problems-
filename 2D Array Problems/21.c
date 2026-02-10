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
    int value = 0;
    int max = 0;
    for(int i = 0; i<r ; i++){
        int count = 0;
        for(int j = 0; j<c-1 ; j++){
            if((a[i][j]%2)!=(a[i][j+1])){
                count++;
            }else{
                break;
            }
        }
        if(count>max){
            max = count;
            value = i;
        }
    }
    printf("Department with Longest Even-Odd Alternating Pattern row index is : %d", value);
    return 0;

}