#include<stdio.h>
int main(){
    int count;
    int arr1[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int arr2[3][3];
    for(int i =0;i<3;i++){
        for(int j = 0;j<3;j++){
            arr2[j][i] = arr1[i][j];
        }
    }
    for(int i =0;i<3;i++){
        printf("\n");
        for(int j =0;j<3;j++){
        printf("%d\t",arr2[i][j]);
        
        }
        printf("\n");
    }
     for(int i =0;i<3;i++){
        for(int j =0;j<3;j++){
        if(arr1[i][j]!=arr2[i][j]){
  count++;
  break;
        }
      
        }
    }
   if(count == 0){
    printf("The given matrix is symmetric");
   }
   else
   printf("The given matrix is not symmetric");
}