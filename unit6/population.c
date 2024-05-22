#include<stdio.h>
#include<math.h>
int main(){
    int pop = 100000;
    for(int i = 1;i<=10;i++){
        pop += (10*pop)/100;
        printf("The population after %d year is: %d\n",i,pop);
    }
}