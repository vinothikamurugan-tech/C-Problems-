#include <stdio.h>

int main() {
  char ch ;
  scanf("%c", &ch);
  int val = ch;
  if(val>=48 && val<=57){
      printf("digit");
  }
  return 0;
}