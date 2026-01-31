#include<stdio.h>

int main(){
    int tot , n , sum = 0 , count = 0 , value;
    scanf("%d", &tot);
    scanf("%d", &n);
    while(n>0){
        scanf("%d", &value);
        sum = sum + value;
        if(sum<tot){
            count = count+1;
        }
        n--;
    }
    printf("People Entered : %d\n",count);
    if(sum>tot){
        printf("Overload Status : Yes");
    }else{
        printf("Overload Status : No");
    }
}