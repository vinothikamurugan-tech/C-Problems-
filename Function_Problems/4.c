#include<stdio.h>

float AOC(int r){
    float cal = 3.14*r*r;
    return cal;
}

int main(){
    int r;
    scanf("%d", &r);
    float area = AOC(r);
    printf("Area of Circle is %.2f", area);
    return 0;
}