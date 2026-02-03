#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    int k = 0;
    int b = n-1;
    int pali = 1;
    while(k<b){
        if(a[k]!=a[b]){
            pali = 0;
            break;
        }
        k++;
        b--;
    }
    if(n==1){
        printf("Yes");
    }
    else if(pali){
        printf("Yes");
    }else{
        printf("No");
    }
    return 0;
}