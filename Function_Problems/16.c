// Fibonacci Series Using Function
#include<stdio.h>

int fibonacci(int n){
    int a = 0;
    int b = 1;
    for(int i = 1 ; i<=n ; i++){
        printf("%d ", a);
        int c = a+b;
        a = b;
        b = c;
    }
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    fibonacci(n);
}