// reverse String
#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    scanf("%s", str);
    for(int i = strlen(str)-1 ; i>=0 ; i--){
        printf("%c", str[i]);
    }
    return 0;
}