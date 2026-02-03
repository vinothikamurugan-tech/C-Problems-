#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int a[n];
    int b[n];
    int index = 0;
    for(int i = 0; i<n ; i++){
        scanf("%d", &a[i]);
    }
    for(int i = 0; i<n ; i++){
        if(a[i]!=0){
            b[index++] = a[i];
        }
    }
    for(int i = index ; i<n ; i++){
        b[index++] = 0;
    }
    for(int i = 0; i<n ; i++){
        printf("%d ", b[i]);
    }
    return 0;
}