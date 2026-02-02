#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    int odd = 0, even = 0;
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
        if(a[i]%2==0){
            even = even+1;
        }else{
            odd = odd+1;
        }
    }
    printf("Even : %d\n",even);
    printf("Odd : %d", odd);
}