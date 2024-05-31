#include<stdio.h>
int main(){
    int arr[25] = {14,29,35,36,34,23,42,5,346,43,532,5,36,34,53,25,3,63,53,23,5,3,63,24,25};
    int min = arr[0];
    int *ptr = arr;
    for(int i=0;i<25;i++){
        if(*(ptr+i)<min)
        min = *(ptr+i);
    }
   printf("The smallest number in the array is: %d",min);
   return 0;
}





