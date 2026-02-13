// sum of array element using pointer
#include<stdio.h>

int sum_of_array(int a[], int n){
    int *p = a;
    int sum = 0;
    for(int i = 0; i<n ; i++){
        sum = sum + *p;
        p++;
    }
    return sum;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    int sum = sum_of_array(a , n);
    printf("Sum of all element in the given Array is : %d", sum);
    return 0;
}