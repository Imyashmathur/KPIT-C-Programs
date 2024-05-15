#include<stdio.h>
int main(){
    int num, positive = 0, negative = 0, zero = 0;
    char choice = 'Y';
    do{
        printf("Enter a number: ");
        scanf("%d",&num);
        if(num>0){
            positive++;
        }else if(num<0){
            negative++;
        }else{
            zero++;
        }
        printf("Do you want to continue(y/n)");
        scanf(" %c", &choice);
    }
    while(choice == 'y' || choice == 'Y');
    printf("\nPositive Numbers :%d\nNegative Numbers :%d\nZero Numbers :%d",positive,negative,zero);
}