#include <stdio.h>

int main() {
    int r , c;
    scanf("%d", &r);
    scanf("%d", &c);
    int a[r][c];
    int fl , sl ;
    for(int i = 0 ;i<r ; i++){
        for(int j = 0 ; j<c ; j++){
            scanf("%d", &a[i][j]);
        }
    }
    if(a[0][0]>a[0][1]){
        fl = a[0][0];
        sl = a[0][1];
    }else if(a[0][0]==a[0][1]){
        fl = a[0][1];
        sl = a[0][2];
    }else{
        fl = a[0][1];
        sl = a[0][0];
    }
    for(int i = 0; i<r ; i++){
        for(int j = 0; j<c ; j++){
            if(a[i][j]>fl){
                sl = fl;
                fl = a[i][j];
            }else if(a[i][j]<fl && a[i][j]>sl){
                sl = a[i][j];
            }
        }
    }
    printf("Second Largest is : %d", sl);

    return 0;
}
