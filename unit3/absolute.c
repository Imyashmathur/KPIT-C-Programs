#include<stdio.h>
#include<stdlib.h>
int main(){
    float a;
    int b;
    printf("Enter a number: ");
    scanf("%f",&a);
     b = abs(a);
     printf("The absolute value of %f is %d",a,b);
     return 0;
}