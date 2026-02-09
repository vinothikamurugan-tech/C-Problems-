// Check the given String is Palindrome or not
#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    scanf("%s", str);
    int i = 0;
    int j = strlen(str)-1;
    int count = 1;
    while(i<j){
        if(str[i]!=str[j]){
           count = 0;
           break;
        }
        i++;
        j--;
    }
    if(count){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
}