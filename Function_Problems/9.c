//Check the given Number is palindrome or not
#include<stdio.h>

int palindrome(int n){
    int rev = 0;
    while(n!=0){
        int temp = n%10;
        rev = (rev*10)+temp;
        n = n/10;
    }
    return rev;
}

int main(){
    int n ;
    scanf("%d", &n);
    int a = palindrome(n);
    if(a==n){
        printf("Palindrome");
    }else{
        printf("Not Palindrome");
    }
    return 0;

}