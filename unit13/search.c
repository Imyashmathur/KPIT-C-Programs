#include<stdio.h>
int main(){
    int arr[10];
    int target;
    int count=0;
    printf("Enter the elements of the array: ");
    for(int i =0;i<=9;i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter the number to be searched: ");
    scanf("%d",&target);

    for(int i =0;i<=9;i++){
        if(arr[i]==target){
            count++;   
        }
    }
     printf("The number %d has occured %d times",target,count);
    return 0;
}