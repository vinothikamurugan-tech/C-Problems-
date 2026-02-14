// Power Calculation using function recursion
#include<stdio.h>

int power(int a , int b){
    if(b==0){
        return 1;
    }else{
        return a*(power(a,b-1));
    }
    
}

int main(){
    int a , b;
    scanf("%d", &a);
    scanf("%d", &b);
    int pow = power(a, b);
    printf("The Power is : %d",pow);
    return 0;
    
}