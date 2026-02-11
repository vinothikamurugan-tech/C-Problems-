#include<stdio.h>

float interest(int p , int r , int t){
    float cal;
    if(p!=0 && r!=0 && t!=0){
        cal = (p*r*t)/100;
    }
    return cal;
}

int main(){
    int p , r , t;
    scanf("%d%d%d", &p , &r , &t);
    float pro = interest(p , r , t);
    printf("Simple Intrest : %.2f", pro);
    return 0;
}
