#include<stdio.h>
int main(){
    int n,a,b;
    printf("Enter the number of elements of the array: ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(int i = 0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i =0;i<n;i++){
        int b = i+1;
       int a = n-b;
       if(arr[i]==arr[a])
       printf("arr[%d] = arr[%d-%d]\n",i,n,b);
    }
    return 0;
}