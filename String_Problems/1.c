#include<stdio.h>
#include<string.h>

int main(){
    char str[30];
    scanf("%s", str);
    int count = 0 , max = 0;
    for(int i = 0; i<strlen(str); i++){
       for(int j = i; j<strlen(str); j++){
          int dup = 1;
          for(int k = i; k<j ; k++){
            if(str[j]==str[k]){
                dup = 0;
                count = 0;
                break;
            }
          }
          if(dup==0){
            count = 0;
            break;
          }
          if(dup){
             count = count + 1;
             if(max<count){
               max = count;
             }
          }
        }
        count = 0;
    }
    printf("Maximum Length of a Substring : %d", max);
    return 0;
}