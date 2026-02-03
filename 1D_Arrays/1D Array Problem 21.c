#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n ;i++){
        scanf("%d", &a[i]);
    }
    int find = 0;
    for(int i = 0; i<n ; i++){
        for(int j = i+1 ; j<n ; j++){
            if(a[i]==a[j]){
                find = a[i];
                break;
            }
        }
        if(find!=0){
            break;
        }
    }
    if(find==0){
        printf("-1");
    }else{
        printf("%d", find);
    }
}