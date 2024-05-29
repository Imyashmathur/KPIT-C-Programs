#include<stdio.h>
int fib(int);
int main(){
 int terms = 25,i,n=0;
 for(i=1;i<=25;i++){
    printf("%d\t",fib(n));
    n++;
 }
 return 0;
}
int fib(int n){
    if(n==0||n==1)
    return n;
    else
    return(fib(n-1)+fib(n-2));
}