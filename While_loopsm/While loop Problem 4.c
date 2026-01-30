#include <stdio.h>

int main() {
    int n,value,count = 0;
    int min = 0;
    scanf("%d", &n);
    int min1 = value;
    while(n>0){
        scanf("%d", &value);
        if(value==0){
            count = count+1;
            if(min<count){
                min = count;
            }
        }
        else{
            count = 0;
        }
        n--;
    }
    printf("%d", min);
    return 0;
}