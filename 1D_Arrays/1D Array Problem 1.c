#include<stdio.h>

int main(){
    int n , fl , sl;
    scanf("%d", &n);
    int a[n];
    for(int i = 0 ;i<n ;i++){
        scanf("%d", &a[i]);
    }
    if(a[0]>a[1]){
        fl = a[0];
        sl = a[1];
    }else if(a[0] == a[1]){
        fl = a[1];
        sl = a[2];
    }else{
        fl = a[1];
        sl = a[0];
    }
    for(int i = 2 ; i<n ; i++){
       if(a[i]>fl){
           sl = fl;
           fl = a[i];
       }else{
           if(a[i]<fl && a[i]>sl){
               sl = a[i];
           }
       }
    }
    printf("Second Largest : %d\n", sl);
    
    
}
