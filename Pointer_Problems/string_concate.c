// Concatenate Two String using pointer
#include<stdio.h>

char string_concate(char *p , char *q){
    char str3[100];
    int i;
    for(i = 0; *p!='\0'; i++){
         str3[i] = *p;
         p++;
    }
    int j;
    for(j = i; *q!='\0'; j++){
         str3[j] = *q;
         q++;
    }
    str3[j] = '\0';
    printf("%s", str3);
    return 0;
}

int main(){
    char str1[50];
    char str2[50];
    scanf("%s", str1);
    scanf("%s", str2);
    char *p = str1;
    char *q = str2;
    string_concate(p,q);
    return 0;
}