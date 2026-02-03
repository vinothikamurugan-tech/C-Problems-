#include<stdio.h>

int main(){
    int n ;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    int count = 0;
    for(int i = 0; i<n ; i++){
        int dup = 0;
        for(int j=0 ; j<i ; j++){
            if(a[i]==a[j]){
                dup = 1;
                break;
            }
        }
        if(!dup){
            printf("%d ",a[i]);
            count++;
        }
    }
    return 0;

}
