#include<stdio.h>
int main(){
    int l,b,area,perimeter;
    printf("Enter the length and breadth of a rectangle: ");
    scanf("%d%d",&l,&b);
    area = l*b;
    perimeter = 2*(l+b);
    if(area>perimeter){
        printf("Area is greater than perimeter");
    }else{
        printf("Area is smaller than perimeter");
    }
    return 0;
}