#include<stdio.h>
int binary(int n);
int recursive_binary(int n);
int main(){
    int n;
    printf("Enter the number: ");
    scanf("%d",&n);
    printf("The binary equivalent of %d is %d\n",n,(binary(n)));
     printf("The recursive binary equivalent of %d is %d\n",n,(recursive_binary(n)));
}
int binary(int n){
  int x,res = 0,pos = 1;
  while(n!=0){
    x = n%2;
    res = res+(x*pos);
    pos = 10*pos;
    n = n/2;
  }
  return res;
}
int recursive_binary(int n){
    if(n==0)
    return 0;
    else
    return ((n%2)+10*recursive_binary(n/2));
}