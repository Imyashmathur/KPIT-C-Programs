#include<stdio.h>
#include<math.h>
int main(){
    double a[] = {137.4,155.2,149.3,160.0,155.6,149.7};
    double b[] = {80.9,92.62,97.93,100.25,68.95,120.0};
    double angle[] = {0.78,0.89,1.35,9.00,1.25,1.75};
    int n = 6;
    double area[n];
    int largest=0;
    for(int i=0;i<n;i++){
      area[i] = (0.5)*a[i]*b[i]*sin(angle[i]);
       printf("Area of plot %d is:  %.2f \n",i+1,area[i]);
       if(area[i]>area[largest]){
        largest = i;
       }
    }
    printf("The largest triangle is %d with an area of %.2f",largest+1,area[largest]);
    return 0;
}