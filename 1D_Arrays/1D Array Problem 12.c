#include<stdio.h>

int main(){
    int n , k;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    scanf("%d", &k);
    int count = 0;
    for(int i=0 ; i<n ; i++){
        for(int j=i ; j<n ; j++){
            if(a[i]+a[j] == k){
                printf("%d %d", a[i], a[j]);
                count = count+1;
                break;
            }
        }
        if(count==1){
            break;
        }
    }
    if(count==0){
        printf("No Pair");
    }
}