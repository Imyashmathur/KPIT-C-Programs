#include<stdio.h>
#include<math.h>
#define PI 3.142
int main(){
    float length, breadth, radius;
    printf("\nEnter the length, breadth and radius:");
    scanf("%f%f%f",&length,&breadth,&radius);
    float aor = length*breadth;
    float por = 2*(length+breadth);
    float aoc = PI*radius*radius;
    float coc = 2*PI*radius;
    printf("Area of rectangle=%f\n",aor);
    printf("Perimeter of rectangle=%f\n",por);
    printf("Area of circle=%f\n",aoc);
    printf("Circumference of circle=%f\n",coc);
    return 0;
}