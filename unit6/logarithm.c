#include<stdio.h>
#include<math.h>
int main(){
    float x,p,d,res=0,r;
    printf("Enter the value of x:");
    scanf("%f",&x);
    d = (x-1)/x;
    for(int i = 2;i<=7;i++){
       p = pow(d,i);
       r = p/2;
       res = res+r;
    }
    res = d+res;
       printf("%f",res);
}