// Count the Length of the String Without using the strlen()
#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    scanf("%s", str);
    int count = 0;
    for(int i = 0; str[i]!='\0' ; i++){
        count = count+1;
    }  
    printf("Length of the String is : %d", count);
}