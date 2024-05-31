#include<stdio.h>
#include<math.h>
int main(){
    int arr[] = {-6,-12,8,13,11,6,7,2,-6,-9,-10,11,10,9,2};
    float n = sizeof(arr)/sizeof(arr[0]);
    float mean;
    for(int i =0;i<n;i++){
        int sum = sum+arr[i];
        mean = sum/n;
    }
      printf("Mean of the numbers are : %0.2f\n",mean);
    float standardDeviation;
    for(int i =0;i<n;i++){
        standardDeviation = (sqrt((arr[i]-mean)*(arr[i]-mean))/n);
        printf("Standard Deviation of the numbers are: %f\n",standardDeviation);
    }
  return 0;
}