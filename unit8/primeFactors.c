#include<stdio.h>
int primeFactor(int);
int main(){
    int num;
    printf("Enter a number: ");
    scanf("%d",&num);
    primeFactor(num);
    return 0;
}
int primeFactor(int x){
    for(int a  = 2;a<=x;a++){
        if(x%a==0){
            printf("%d, ",a);
            x = x/a;
            a--;
        }
    }
    return 0;
}