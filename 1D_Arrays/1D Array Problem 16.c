#include<stdio.h>

int main(){
    int n , index=0 ;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    int min = a[0];
    for(int i = 1; i<n ; i++){
        if(a[i]<min){
            min = a[i];
            index = i;
        }
    }
    if(index==n-1){
        printf("-1");
    }else{
        int max = a[index+1];
        for(int i = index+1 ; i<n ; i++){
            if(a[i]>max){
                max = a[i];
            }
        }
        printf("%d", max-min);
    }
    return 0;
}