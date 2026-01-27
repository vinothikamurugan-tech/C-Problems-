#include <stdio.h>

int main() {
    int cl, age;
    scanf("%d", &cl);
    scanf("%d", &age);
    switch(cl){
        case(1):
           if(age<12){
               int amount = 300*0.50;
               printf("Fare ₹%d", 300-amount);
               break;
           }else if(age>=60){
               int amount1 = 300*0.33;
               printf("Fare  ₹%d", 300-amount1);
               break;
           }else{
               printf("Fare  ₹300");
               break;
           }
        case(2):
           if(age<12){
               int amount2 = 1000*0.50;
               printf("Fare  ₹%d", 1000-amount2);
               break;
           }else{
               printf("Fare  ₹1000");
           }
           
    }
    return 0;
}