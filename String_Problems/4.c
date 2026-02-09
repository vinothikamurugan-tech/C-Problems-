#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    scanf("%s", str);
    char value = '0' ;
    for(int i = 0; i<strlen(str); i++){
        int count = 0;
        for(int j = 0; j<strlen(str); j++){
             if(str[i]==str[j]){
                count = count + 1;
             }
        }
        if(count==1){
            value = str[i];
            break;
        }
    }
    if(value != '0'){
        printf(" The First Non-repeating Value is : %c", value);
    }else{
        printf("-1");
    }
}