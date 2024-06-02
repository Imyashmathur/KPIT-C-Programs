#include<stdio.h>

void cS(int arr[],int size){
    int temp[2];
    temp[0] = arr[0];
    temp[1] = arr[1];
    for(int i = 2;i<size;i++){
        arr[i-2] = arr[i];
    }
    arr[size-2] = temp[0];
    arr[size-1] = temp[1];
}

void shiftRow(int matrix[4][5],int rows,int cols){
    for(int i=0;i<rows;i++){
        cS(matrix[i],cols);
    }
}

int main(){
    int matrix[4][5] = {
        {1,2,3,4,5},
        {6,7,8,9,10},
        {11,12,13,14,15},
        {16,17,18,19,20}
    };
    printf("Original matrix: \n");
    for(int i=0;i<4;i++){
        printf("\n");
        for(int j =0;j<5;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
    shiftRow(matrix,4,5);
    printf("Matrix after shifting: \n");
    for(int i=0;i<4;i++){
         printf("\n");
        for(int j =0;j<5;j++){
            printf("%d ",matrix[i][j]);
        }
        printf("\n");
    }
}