#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int size = n*2-1;
    int top , bot , right , left , min;
    for(int i = 0; i<size ; i++){
        for(int j = 0; j<size ; j++){
            min = i;
            top = i;
            bot = j;
            right = size-i-1;
            left = size-j-1;
            if(min>bot){
                min = bot;
            } 
            if(min>right){
                min = right;
            }
            if(min>left){
                min = left;
            }
            printf("%d ", n-min);
        }
        printf("\n");
    }

    return 0;
}