#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int sum = 0;
    int tot = (n*(n+1))/2;
    for(int i = 0; i<n-1 ; i++){
        scanf("%d", &a[i]);
        sum = sum+a[i];
    }
    printf("Missing Value : %d\n",tot-sum);
}