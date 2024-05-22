#include<stdio.h>
int main(){
    int i,j,k,count=1;
    for(int i = 1;i<=4;i++){
        for(int j=1;j<=4-i;j++){
            printf(" ");
        }
        for(int k =1;k<=i;k++){
            printf(" %d",count);
            count++;
        }
        printf("\n");
    }
}