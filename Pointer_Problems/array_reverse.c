// Reverse Array using pointer
#include<stdio.h>

int array_reverse(int a[], int n){
    int *p = a;
    for(int i = n-1 ; i>=0 ; i--){
        printf("%d ",*(p+i));
    }
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    array_reverse(a , n);
    return 0;
}