#include<stdio.h>
#include"intrest.h"

int main(){
    float p,r,t;
    printf("Enter the principal amount: ");
    scanf("%f",&p);
    printf("Enter the intrest rate: ");
    scanf("%f",&r);
    printf("Enter the time: ");
    scanf("%f",&t);
    float i = intrest(p,r,t);
    float amount = *&p + i;
    printf("The simple intrest is: %f\n",i);
    printf("The total amount is: %f\n",amount);
}