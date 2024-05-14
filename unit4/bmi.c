#include<stdio.h>
#include<math.h>
int main(){
    float bmi,weight,height;
    printf("Enter the weight in kgs : ");
    scanf("%f",&weight);
     printf("Enter the height in meters : ");
    scanf("%f",&height);

    bmi = weight/pow(height,2);
    
    if(bmi>=40)
    printf("You are mordibly obese");
    if(bmi>30&&bmi<30.9)
    printf("You are obese");
     if(bmi>25&&bmi<25.9)
    printf("You are overweight");
     if(bmi>18.6&&bmi<24.9)
    printf("You are ideal");
     if(bmi>17.6&&bmi<18.5)
    printf("You are underweight");
     if(bmi>15.1&&bmi<17.5)
    printf("You are anorexic");
     if(bmi<15)
    printf("You are starving");
}