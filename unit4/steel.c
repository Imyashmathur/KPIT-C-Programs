#include<stdio.h>
int main(){
    float h, cc, ts;
    printf("Enter the hardness : ");
    scanf("%f", &h);
    printf("Enter the Carbon Content : ");
    scanf("%f", &h);
    printf("Enter the Tensile Strength : ");
    scanf("%f", &h);
    
    if(h>50 && cc<0.7 && ts>5600)
    printf("It is a grade 10 steel");
    else if(h>50 && cc<0.7 && ts<5600)
    printf("It is a grade 9 steel");
    else if(h<50 && cc<0.7 && ts>5600)
    printf("It is a grade 8 steel");
    else  if(h>50 && cc<0.7 && ts>5600)
    printf("It is a grade 7 steel");
    else  if(h>50 || cc<0.7 || ts>5600)
    printf("It is a grade 6 steel");
    else if(h>50 && cc>0.7 && ts<5600)
    printf("It is a grade 5 steel");
    return 0;
}