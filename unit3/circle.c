#include<stdio.h>
#include<math.h>
int main(){
    float x1,y1,x2,y2,radius,pc;
    printf("Enter the co-ordinates(x1,y1) and radius: ");
    scanf("%f%f%f%f%f",&x1,&y1,&x2,&y2,&radius);
    pc = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    if(pc<radius){
        printf("Point(%f,%f) lies inside the circle",x1,y1);
    }else{
        printf("Point(%f,%f) lies outside the circle",x2,y2);
    }
    return 0;
}