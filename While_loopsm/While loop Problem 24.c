#include<stdio.h>

int main(){
    int n , value ,tot , sum=0, count = 0 ,count2 = 0 ;
    scanf("%d", &tot);
    scanf("%d", &n);
    int index = 0;
    int rem = tot;
    while(n>0){
        scanf("%d", &value);
        sum = sum + value;
        count++;
        if(sum>tot){
            count2++;
            if(count2==1){
                index = count;
                rem = sum-tot;
            }
        }
        n--;
    }
    if(sum<tot){
        printf("Emergency Stage : Not Occurred\n");
        printf("Fuel Wasted : 0\n");
    }else{
        printf("Emergency Stage : %d\n", index);
        printf("Fuel Wasted : %d",rem);
    }
}