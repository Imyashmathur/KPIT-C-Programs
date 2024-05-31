#include<stdio.h>
int main(){
    int arr[25],negative=0,positive=0,even=0,odd=0;
      printf("Enter 25 elements of the array: ");
    for(int i = 0;i<=24;i++){
      
        scanf("%d",&arr[i]);
    }
    for(int i = 0;i<=24;i++){
        if(arr[i]>0)
        positive++;
        if(arr[i]<0)
        negative++;
        if(arr[i]%2==0)
        even++;
        if(arr[i]%2!=0)
        odd++;
    }
    printf("No. of positive elements are: %d\n",positive);
    printf("No. of negative elements are: %d\n",negative);
    printf("No. of even elements are: %d\n",even);
    printf("No. of odd elements are: %d\n",odd);
}