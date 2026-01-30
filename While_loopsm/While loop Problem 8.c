#include <stdio.h>

int main() {
    int n , value , count = 0 , max = 0;
    scanf("%d", &n);
    while(n>0){
       scanf("%d", &value);
       if(value==0){
           count++;
           if(max<count){
               max = count;
           }
           
       }else{
           count = 0;
       }
       n--;
    }
    printf("Longest Default Streak : %d", max);

    return 0;
}