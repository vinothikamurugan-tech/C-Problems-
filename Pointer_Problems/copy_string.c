// Copy one string to another string whith using pointer
#include<stdio.h>

char stringcpy(char *n){
    char str2[100];
    int i;
    for(i = 0; *n!='\0'; i++){
        str2[i] = *n;
        n++;
    }
    str2[i] = '\0';
    printf("Copied String is : %s", str2);
}

int main(){
    char str[100];
    fgets(str , sizeof(str), stdin);
    char *p = str;
    stringcpy(p);
    return 0;
}