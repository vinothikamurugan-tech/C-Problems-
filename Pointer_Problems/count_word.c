// Count a Word in a String
#include<stdio.h>

char find(char *p){
     int count = 1;
     for(int i = 0; *p!='\0' ; i++){
        if(*p==' '){
            count = count+1;
        }
        p++;
     }
     printf("Totally %d word in the given String", count);
     return 0;
}

int main(){
    char str[100];
    fgets(str , sizeof(str), stdin);
    char *p = str;
    find(p);
    return 0;
}
