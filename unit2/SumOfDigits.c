#include<stdio.h>
int main(){
   int num,a,b,c,d,e;
    printf("Enter a number:");
    scanf("%d",&num);
    e = num%10;
    d = (num/10)%10;
    c = (num/100)%10;
    b = (num/1000)%10;
    a = (num/10000);
    int sum = a+b+c+d+e;
    printf("%d",sum);
    return 0;
}