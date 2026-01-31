#include<stdio.h>

int main(){
    int tot , n , fail = 0, safe = 0 , value;
    scanf("%d", &tot);
    scanf("%d", &n);
    while(n>0){
        scanf("%d", &value);
        if(value>tot){
            fail = fail + 1;
        }else if(value<tot){
            safe = safe + 1;
        }
        n--;
    }
    printf("Safe Hours : %d\n", safe);
    printf("Failure Count : %d", fail);
}