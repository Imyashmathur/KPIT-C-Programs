#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter three sides of the triangle: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a==b && a==c)
        printf("This is an equilateral triangle");

    if(a!=b && b!=c && a!=c)
        printf("This is a scalene triangle");
    
    if((pow(a,2) + pow(b,2) == pow(c,2)) || (pow(c,2) + pow(b,2) == pow(a,2)) || pow(a,2) + pow(c,2) == pow(b,2))
        printf("This is a right angled triangle");
 
    if((a==b) && a != c || (a==c) &&  a!= b || (c==b) && c != a)
        printf("This is an isosceles triangle");
  
    return 0;
}