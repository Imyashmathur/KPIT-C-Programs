#include<stdio.h>
int main(){
    for(int i =1;i<=24;i++){
        if(i<=11){
            printf("Time is %d AM\n",i);
        }
        if(i==12)
         printf("Time is %d Noon\n",i);
         if(i>=13 && i<=23){
            int time2 = i%12;
         printf("Time is %d PM\n",time2);
         }
         if(i==24){
            int time3 = i/2;
         printf("Time is %d Midnight\n",time3);
         }
    }
    return 0;
}