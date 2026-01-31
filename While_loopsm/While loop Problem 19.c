#include<stdio.h>

int main(){
    int tot , n , sum = 0 , value;
    scanf("%d", &tot);
    scanf("%d", &n);
    while(n>0){
        scanf("%d", &value);
        sum = sum+value;
        n--;
    }
    if(sum<tot){
        printf("Treated Patients : %d\n", sum);
        printf("Rejected Patients : 0");
    }else if(sum>tot){
        int rem = sum-tot;
        printf("Treated Patients : %d\n", tot);
        printf("Rejected Patients : %d", rem);
    }
}