#include <stdio.h>

int main() {
    int n; 
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    int index = -1;
    for(int i = 1; i<n-1 ; i++){
        if(a[i]==a[i-1]+a[i+1]){
            index = i;
        }
    }
    if(n==1){
        printf("0");
    }else{
        printf("%d", index);
    }

    return 0;
}