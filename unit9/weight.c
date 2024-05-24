#include<stdio.h>
void conversion(double kg, double *grams,double *tons,double *pounds){
   *grams = kg*1000;
   *tons = kg/1000;
   *pounds = kg*2.2;
}
int main(){
    double kg,grams,tons,pounds;
    printf("Enter the weight in kg: ");
    scanf("%lf",&kg);
    conversion(kg,&grams,&tons,&pounds);
    printf("Weight in kg: %.2f kg\n",kg);
    printf("Weight in grams: %.2f grams\n",grams);
    printf("Weight in tons: %.2f tons\n",tons);
    printf("Weight in pounds: %.2f lbs\n",pounds);
return 0;
}
