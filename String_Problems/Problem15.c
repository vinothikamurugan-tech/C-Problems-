//Word Counter
#include<stdio.h>
#include<string.h>

int main(){
    char str[200];
    fgets(str , sizeof(str), stdin);
    int count = 1;
    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]==' '){
            count = count + 1;
        }
    }
    printf("Total Word in the given String is %d", count);
    return 0;
}