//Find the element in array using pointer and return the position of the element
#include<stdio.h>

int find(int a[] , int n , int *target){
    int *p = a;
    int position = -1;
    for(int i = 0; i<n ; i++){
        if(*(p+i)==*target){
            printf("Position of the element is %d", i+1);
            position = 1;
            break;
        }else{
            position = -1;
        }
    }
    if(position==-1){
        printf("-1");
    }
    return 0;
}

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    int target ;
    scanf("%d", &target);
    find(a , n , &target);
    return 0;
}