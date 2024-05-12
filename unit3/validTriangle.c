#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the angles: ");
    scanf("%d%d%d",&a,&b,&c);
    if(a+b+c!=180){
      printf("This is not a valid triangle");
    }else{
        printf("This is a valid triangle");
    }
    return 0;
}