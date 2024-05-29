#include<stdio.h>
int rSum(int num);
int main(){
    int num;
    printf("Enter five digit number: ");
    scanf("%d",&num);
   int sum = rSum(num);
    printf("The sum of the digits of the number: ",sum);
}

int rSum(int num){
    int s,remainder;
    if(num!=0){
        remainder = num%10;
        s = remainder+rSum(num/10);
    }else{
        return (0);
    }
    return s;
}