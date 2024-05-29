#include<stdio.h>
void primeFactors(int,int);
int main(){
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
     primeFactors(num,2);
     return 0;
}

void primeFactors(int n,int i){
    if(i<=n){
        if(n%i==0){
            printf("%d\n",i);
            n =n/i;
        }
        else
        i++;
        primeFactors(n,i);
    }
}