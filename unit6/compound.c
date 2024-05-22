#include<stdio.h>
#include<math.h>
int main(){
    float p,r,n,q,a;
    for(int i = 1;i<=10;i++){
        printf("Enter the principal, rate, years, times: ");
        scanf("%f%f%f%f",&p,&r,&n,&q);
        a = p*(pow((1+r/q),n*q));
        printf("The amount after %f years is %.2f\n: ",n,a);
    }
    return 0;
}