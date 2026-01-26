#include <stdio.h>

int main() {
  char ch ;
  scanf("%c", &ch);
  int val = ch;
  if(val>=33 && val<=47){
      printf("Special Character");
  }else if(val>=48 && val<=57){
      printf("Digit");
  }else if(val>=65 && val<=90 || val>=97 && val<=122){
      printf("Alphabet");
  }
  return 0;
}