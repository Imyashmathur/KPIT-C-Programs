#include<stdio.h>
#include<math.h>
int main(){
    float x,y,r,phi;
    printf("Enter the cartesian co-ordinates(x,y):");
    scanf("%f%f",&x,&y);
    r = sqrt(x*x+y*y);
    phi = atan(y/x);
    printf("Polar co-ordinates of(%d%d) in polar(%f%f)",x,y,r,phi);
    return 0;
}