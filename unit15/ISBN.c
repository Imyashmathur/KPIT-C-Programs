#include<stdio.h>

int main(){
    char ISBN[15];
    int sum = 0;
    printf("Enter 10 digit ISBN number : ");
    scanf("%10s",ISBN);
    for(int i=0;i<10;i++){
        ISBN[i] -= 48;
        sum = sum + ((i+1)*ISBN[i]);
    }
    if(sum%11)
    printf("\nISBN is wrong");
    else
    printf("\nISBN is right");
}