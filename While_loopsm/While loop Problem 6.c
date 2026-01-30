#include<stdio.h>

int main(){
    int max , n , value;
    scanf("%d", &max);
    scanf("%d", &n);
    int sum = 0 , count = 0;
    while(n>0){
        scanf("%d", &value);
        sum = sum+value;
        if(sum<max){
            count = count+1;
        }
        n--;
    }
    printf("Passengers Allowed : %d\n", count);
    if(sum>max){
        printf("Overload : Yes");
    }else{
        printf("Overload : No");
    }
}