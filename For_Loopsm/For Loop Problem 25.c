#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int sum = 0;
    int a = n;
    for(int i = n; i!=0 ; i/=10){
        int temp = i%10;
        sum = sum+(temp*temp*temp);
    }
    if(sum==a){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}