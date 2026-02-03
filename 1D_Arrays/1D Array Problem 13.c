#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int sum = 0;
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
        sum = sum + a[i];
    }
    int avg = sum/n;
    int count = 0;
    for(int i = 0; i<n ; i++){
        if(avg>a[i]){
            count = count+1;
        }
    }
    printf("%d", count);
    
}