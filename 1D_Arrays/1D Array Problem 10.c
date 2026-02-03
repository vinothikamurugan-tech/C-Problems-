#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
    for(int i = 0;i<n ; i++){
        scanf("%d", &a[i]);
    }
    int min = -1;
    int index = 0;
    b[index] = min;
    index++;
    for(int i = n-1 ; i>0 ; i--){
        if(min<a[i]){
            min = a[i];
            b[index]=a[i];
            index++;
        }else{
            b[index] = min;
            index++;
        }
    }
    for(int i = index-1 ; i>=0 ; i--){
        printf("%d ", b[i]);
    }
}