// Check the given string is Palindrome or not using Pointer
#include<stdio.h>
#include<string.h>

char palindrome(char *p, int len){
        char org = *p;
        char str2[100];
        int i = 0;
        int j = len-1;
        int pal = 1;
        while(i<j){
            if(*(p+i)!=*(p+j)){
                pal = 0;
                break;
            }
            i++;
            j--;
        }
        if(pal==1){
            printf("yes");
        }else{
            printf("No");
        }
}

int main(){
    char str[100];
    scanf("%s", str);
    char *p = str;
    int len = strlen(str);
    palindrome(p , len);

}