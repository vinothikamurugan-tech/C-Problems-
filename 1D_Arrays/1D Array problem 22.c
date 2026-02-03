#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int count = 0;
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 1 ; i<n-1 ; i++){
        if(a[i]>a[i-1] && a[i]>a[i+1]){
            count = count+1;
        }
    }
    printf("%d", count);
}