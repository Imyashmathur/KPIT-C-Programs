#include<stdio.h>
int main(){
    float centigrade;
    float fahrenheit;
    printf("\nEnter the temperature of a city:");
    scanf("%f",&fahrenheit);
    centigrade = ((fahrenheit-32)*5/9);
    printf("Centigrade = %f",centigrade);
    return 0;
}