#include <stdio.h>

int main() {
  int a, b, c;
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  if(a>b && a>c){
      printf("%d is a largest Number", a);
  }else if(b>a && b>c){
      printf("%d is a largest Number", b);
  }else{
      printf("%d is a largest Number", c);
  }
  return 0;
}