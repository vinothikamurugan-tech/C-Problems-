// Find the maximum element in the Array Using pointer
#include<stdio.h>

int max(int a[], int size){
      int *p = a;
      int maxi = *p;
      for(int i = 0; i<size ; i++){
        if(maxi<*p){
            maxi = *p;
        }
        p++;
      }
      return maxi;

}

int main(){
    int size;
    scanf("%d", &size);
    int a[size];
    for(int i = 0; i<size ; i++){
        scanf("%d", &a[i]);
    }
    int maxi = max(a, size);
    printf("The Maximum value of the Given Array is %d", maxi);
    return 0;
}