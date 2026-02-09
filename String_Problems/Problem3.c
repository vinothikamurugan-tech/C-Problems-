// Print the email ID before the @ ... Like vino123@gmail ==> output vino123
#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    scanf("%s", str);
    for(int i = 0; str[i]!='@'; i++){
        printf("%c", str[i]);
    }
    return 0;
}