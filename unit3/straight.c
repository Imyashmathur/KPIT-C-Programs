#include<stdio.h>
int main(){
    float x1,y1,x2,y2,x3,y3,m,n;
    printf("Enter the points(x1,y1): ");
    scanf("%f%f",&x1,&y1);
     printf("Enter the points(x2,y2): ");
    scanf("%f%f",&x2,&y2);
     printf("Enter the points(x3,y3): ");
    scanf("%f%f",&x3,&y3);
    m = (y2-y1)/(x2-x1);
    n = (y3-y2)/(x3-x2);
    if(m == n){
        printf("All 3 point lie in a straight line");
    }else{
        printf("All 3 point does not lie in a straight line");
    }
    return 0;
}