#include<stdio.h>
int main(){
    int arr[10] = {1,2, 3, 4, 5, 6, 7, 8, 9, 10 };
    modify(&arr[0],10);
    for(int i = 0;i<10;i++){
        printf("%d\t",arr[i]);
    }
    return 0;
}
int modify(int arr[],int n){
 for(int i =0;i<n;i++){
    arr[i] = 3*arr[i];
 }
 return 0;
}