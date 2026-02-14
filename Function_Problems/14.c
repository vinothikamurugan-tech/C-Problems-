// check The given number is Perfect Number or not using Function
#include<stdio.h>

int perfect(int n){
    int sum = 0;
    for(int i = 1; i<n ; i++){
        if(n%i==0){
            sum = sum + i;
        }
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    int a = perfect(n);
    if(a==n){
        printf("%d is a Perfect Number",n);
    }else{
        printf("%d is Not a Perfect Number",n);
    }
    return 0;
}
