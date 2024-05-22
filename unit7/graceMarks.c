#include<stdio.h>
int main(){
    int class,Nos;
    printf("Enter the class obtained: ");
    scanf("%d",&class);
    printf("Enter the no. of subjects failed: ");
    scanf("%d",&Nos);
    switch (class)
    {
    case 1:
        if(Nos<=3){
          printf("He got the grace of %d marks",5*Nos);
        }else
        printf("He didn't get any grace");
        break;
    case 2:
    if(Nos<2){
       printf("He got the grace of %d marks",4*Nos);
    }else{
      printf("He didn't get any grace");
    }
    break;
    case 3:
    if(Nos<1)
  printf("He got the grace of %d marks",4*Nos);
    else
    printf("He didn't get any grace");
    break;
    default:
        break;
    }
}