// Digit Counter
#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    fgets(str , sizeof(str), stdin);
    int count = 0;
    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]>='0' && str[i]<='9'){
            count = count + 1;
        }
    }
    printf("Digit in the Given string is : %d", count);
    return 0;
}