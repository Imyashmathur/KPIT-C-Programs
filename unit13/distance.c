#include<stdio.h>
#include<math.h>

int main(){
    float x[10],y[10],dis=0;
    printf("Enter x and y coordinates : \n");
    for(int i =0;i<10;i++){
        scanf("%f%f",&x[i],&y[i]);
    }
    for(int i =0;i<10;i++)
    dis = dis+sqrt(pow((x[i+1]-x[i]),2)+pow((y[i+1]-y[i]),2));
    printf("Distance of last point from first point is: %f",dis);
    return 0;
}