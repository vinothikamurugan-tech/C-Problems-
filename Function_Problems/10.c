// Sum of Natural Numbers using Function
#include<stdio.h>

int sum(int n){
    int sum1 = 0;
    for(int i = n ; i>=1 ; i--){
        sum1 = sum1 + i;
    }
    return sum1;
}

int main(){
    int n;
    scanf("%d", &n);
    int a = sum(n);
    printf("Sum of the Natural Number is %d", a);
    return 0;

}
