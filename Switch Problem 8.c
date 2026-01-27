#include <stdio.h>

int main() {
    int attend, mark;
    scanf("%d", &mark);
    scanf("%d", &attend);
    if(attend<75 || mark<50){
        printf("Fail");
    }else if(mark>=75){
        printf("Distinction");
    }else if(mark>=50 && mark<=74){
        printf("Pass");
    }
    return 0;
}