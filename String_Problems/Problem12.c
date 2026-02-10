// Special Character Counter
#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    fgets(str , sizeof(str), stdin);
    int count = 0;
    for(int i = 0; str[i]!='\0'; i++){
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z') || (str[i]>='0' && str[i]<='9')){
              count = count+1;
        }
    }
    printf("Special Character in the given string is : %d", strlen(str)-1-count);
    return 0;
}