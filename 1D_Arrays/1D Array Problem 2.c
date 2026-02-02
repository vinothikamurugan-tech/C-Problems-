#include<stdio.h>

int main(){
    int n , x , count = 0;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &x);
    for(int i = 0; i<n ; i++){
        if(a[i]==x){
            count = count+1;
        }
    }
    printf("%d", count);
}