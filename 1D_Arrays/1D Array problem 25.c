#include<stdio.h>

int main(){
    int n , pro1 , pro2;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<n-1 ; i++){
        for(int j = 0 ; j<n-i-1 ; j++){
            if(a[j]>a[j+1]){
                int temp = a[j];
                a[j] = a[j+1];
                a[j+1] = temp;
            }
        }
    }
    pro1 = a[n-1]*a[n-2];
    pro2 = a[0]*a[1];
    if(pro1>pro2){
        printf("%d", pro1);
    }else{
        printf("%d", pro2);
    }
    
}