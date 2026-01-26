#include <stdio.h>

int main() {
  char ch;
  scanf("%c", &ch);
  int val = ch;
  if(val>=65 && val<=90){
      printf("Uppercase Letter");
  }else if(val>=97 && val<=122){
      printf("Lowercase Letter");
  }
  return 0;
}