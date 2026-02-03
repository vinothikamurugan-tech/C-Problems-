#include<stdio.h>

int main(){
    int n, np , pp;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    int min = a[0];
    for(int i = 1; i<n ; i++){
        int now = a[i];
        if(now < 0){
            np = -(now);
        }else{
            np = now;
        }
        if(min<0){
            pp = -(min);
        }else{
            pp = min;
        }
        if(np<pp){
            min = now;
        }else if(np==pp && now>min){
            min = now;
        }
    }
    printf("%d", min);
}