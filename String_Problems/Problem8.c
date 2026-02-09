//Space Counter
#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    fgets(str, sizeof(str), stdin);
    int count = 0;
    for(int i = 0; str[i]!='\0'; i++){
        if(str[i]==' '){
           count = count + 1;
        }
    }
    printf("The Count of the space is : %d", count);
    return 0;
}