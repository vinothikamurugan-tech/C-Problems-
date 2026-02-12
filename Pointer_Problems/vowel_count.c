// Count the Vowels in a given String
#include<stdio.h>

int isvowel(char *p){
    return (*p=='a' || *p=='e' || *p=='i' || *p=='o' || *p=='u' || *p=='A' || *p=='E' || *p=='I' || *p=='O' || *p=='U');
}

int main(){
    char str[100];
    fgets(str, sizeof(str), stdin);
    char *p = str;
    int count = 0;
    for(int i = 0; *p!='\0'; i++){
        if(isvowel(p)){
            count++;
        }
        p++;
    }
    printf("The Vowel Count in the Given String is %d", count);
    return 0;
}