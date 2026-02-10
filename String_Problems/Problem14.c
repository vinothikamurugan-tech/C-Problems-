//Manual String Copy without using strcpy()
#include<stdio.h>
#include<string.h>

int main(){
    char str1[300];
    char str2[300];
    fgets(str1 , sizeof(str1), stdin);
    int i;
    for(i = 0; str1[i]!='\0' ; i++){
         str2[i] = str1[i];
    }
    str2[i] = '\0';
    printf("Copied String : %s", str2);
    return 0;
}