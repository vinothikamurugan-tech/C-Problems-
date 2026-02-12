// Swapping Two Variables using Pointer
#include<stdio.h>

int swap(int *a , int *b){
       int temp = *a;
       *a = *b;
       *b = temp;
}

int main(){
    int a , b ;
    scanf("%d%d", &a , &b);
    printf("Before Swapping : %d %d\n", a , b);
    swap(&a, &b);
    printf("After Swapping : %d %d\n", a , b);
    return 0;
}
