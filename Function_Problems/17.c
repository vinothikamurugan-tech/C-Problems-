// Check the given Number is Armstrong or not
#include<stdio.h>

int armstrong(int n){
    int sum = 0;
    while(n!=0){
        int temp = n%10;
        sum = sum+(temp*temp*temp);
        n = n/10;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    int a = armstrong(n);
    if(a==n){
        printf("Armstrong");
    }else{
        printf("Not Armstrong");
    }

}