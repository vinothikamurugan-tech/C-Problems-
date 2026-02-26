#include<stdio.h>

int main(){
    int n , initial, value;
    scanf("%d", &n);
    scanf("%d", &initial);
    int count = 0;
    while(n>0){
        scanf("%d", &value);
        initial = initial + value;
        if(initial<2000 && n>1){
            count = count+1;
        }
        n--;
    }
    printf("Final Balance : %d\n", initial);
    printf("Low Balance Day : %d", count);
}
