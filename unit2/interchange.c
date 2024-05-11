#include<stdio.h>
int main(){
    int C,D;
    printf("Enter two numbers: ");
    scanf("%d",&C);
    scanf("%d",&D);
    int K = C;
    C = D;
    D = K;
    printf("The value of C is: %d\n",C);
    printf("The value of D is: %d\n",D);
    return 0;
}