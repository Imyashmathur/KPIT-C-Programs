#include<stdio.h>
int main(){
    int ram , shyam, ajay;
    printf("Give the ages of ram, shyam, ajay: ");
    scanf("%d%d%d",&ram,&shyam,&ajay);
    if(ram<ajay && ram < shyam){
        printf("Ram is youngest");
    }else if(ajay<ram && ajay<shyam){
      printf("Ajay is youngest");
    }else if(shyam<ram && shyam<ajay){
      printf("Shyam  is youngest");
    }
 return 0;
}