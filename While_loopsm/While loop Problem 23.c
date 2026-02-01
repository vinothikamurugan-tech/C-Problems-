#include <stdio.h>

int main() {
    int n , value , count = 0, min = 0, count2 = 0, min1 =0;
    scanf("%d", &n);
    int var = 0 , index = 0 , var1 = 0;
    while(n>0){
        scanf("%d", &value);
        count++;
        if(value>70){
            var1 = var1+1;
        }
        if(value>70 && value>min){
            min = value;
            count2++;
            if(min1<count2){
                min1 = count2;
            }
        }else{
            if(count2>1){
                var++;
                if(var==1){
                    index = --count;
                }
            }
            min = 0;
            count2 = 0;
        }
        n--;
    }
    if(index>0){
        printf("Breakdown At Reading : %d\n", index);
    }else{
        printf("Breakdown At Reading : Not Occurred\n");
    }
    printf("Unsafe Readings : %d", var1);
    
    return 0;
}