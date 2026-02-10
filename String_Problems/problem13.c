// First Occurrence of a given Character
#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    fgets(str , sizeof(str), stdin);
    char ch;
    scanf("%c", &ch);
    int index = -1;
    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]==ch){
           printf("Position : %d", i);
           index = i;
           break;
        }
    }
    if(index==-1){
         printf("Position : %d", index);
    }
    return 0;
}