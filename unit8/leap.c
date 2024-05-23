#include<stdio.h>

void leap(int);

int main(){
    int yr;
    printf("Enter the year : ");
    scanf("%d",&yr);
    leap(yr);
    return 0;
}
void leap(int yr){
    if(yr%400==0){
        printf("%d is a leap year",yr);
    }
   else if(yr%100==0){
        printf("%d is not a leap year",yr);
    }
    else if(yr%4==0){
        printf("%d is a leap year",yr);
    }else{
        printf("%d is not a leap year",yr);
    }
}