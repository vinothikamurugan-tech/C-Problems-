#include<stdio.h>

int main(){
    int n, value ;
    scanf("%d", &n);
    int max1 = 0 , max2 = 0;
    int sum = 0;
    int count = 0;
    while(n>0){
        scanf("%d", &value);
        if(value>70){
            sum = sum+1;
        }
        if(value>max1 && value>70){
            max1 = value;
            count++;
            if(max2<count){
                max2 = count;
            }
        }
        else{
            count = 0;
            max1 = 0;
        }
        n--;
    }
    printf("Noise Violations : %d\n", sum);
    printf("Longest Violation Streak : %d", max2);
}