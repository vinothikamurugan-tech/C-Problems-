#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    int min = a[n-1];
    int index = 0;
    b[index] = a[n-1];
    index++;
    for(int i = n-2 ; i>=0 ; i--){
        if(min<a[i]){
            min = a[i];
            b[index] = min;
            index++;
        }
    }
    for(int i = index-1; i>=0 ; i--){
        printf("%d ", b[i]);
    }
}