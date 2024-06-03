#include<stdio.h>
#include<string.h>

int main(){
    char c[20];
    int sum=0;
    printf("Enter the digits of the credit card number : ");
    scanf("%16s",c);
    for(int i=0;i<16;i++){
        c[i] -= 48;
       if((i%2))
       sum = sum+c[i];
       else{
        c[i] *= 2;
        if(c[i]>=10)
          c[i] -= 9;
          sum = sum + c[i];
       }
    }
   if(!(sum%10))
   printf("\nNumber is valid.");
   else
   printf("\nNumber is not valid");
   return 0;
    
}