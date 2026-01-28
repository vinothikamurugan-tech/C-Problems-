#include <stdio.h>

int main() {
    int n, p;
    scanf("%d", &n);
    scanf("%d", &p);
    if(p>0){
       int sum = 1;
       for(int i = p ; i>=1 ; i--){
          sum = sum*n;
       }
       printf("%d", sum);
    }else if(p<=0){
        printf("1");
    }
    return 0;
}