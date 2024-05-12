#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d%d",&x,&y);
    if(x==0){
        printf("The point lies on Y-axis");
    }
    else if(y==0){
        printf("The point lies on X-axis");
    }else{
        printf("The point lies on the origin");
    }
    return 0;
}