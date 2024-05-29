#include<stdio.h>
int rec_sum(int n);
int main(){
    int n = 25;
    printf("The sum of first 25 natural number is :%d",rec_sum(n));
}

int rec_sum(int n){
int sum = 0;
if(n==0)
return 0;
else
sum = n + rec_sum(n-1);
return sum;
}