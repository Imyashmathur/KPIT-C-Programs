#include<stdio.h>
int main(){
    int arr1[5],arr2[5],i,j;
    for(i=0;i<=4;i++){
        printf("Enter the five elements");
      scanf("%d",&arr1[i]);
    }
    for(i=0,j=4;i<=4;i++,j--){
        arr2[j] = arr1[i];
    }
    printf("Elements in reverse order is \n");
    for(i = 0;i<=4;i++){
        printf("%d\t",arr2[i]);
    }
    return 0;
}