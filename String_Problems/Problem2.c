// Password Check - Uppercase Check
#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    scanf("%s", str);
    int count = 0;
    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]>='A' && str[i]<='Z'){
            count = count+1;
        }
    }
    if(count>0){
        printf("Valid");
    }else{
        printf("Invalid");
    }
}