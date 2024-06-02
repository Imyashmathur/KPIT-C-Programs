#include<stdio.h>
int main(){
    int a[3][3] = {1,2,3,4,5,6,7,8,9};
    int b[3][3] = {10,11,12,13,14,15,16,17,18};
    int ans[3][3];
    for(int x = 0;x<3;x++){
        for(int i = 0;i<3;i++){
            ans[x][i] = 0;
            for(int j = 0;j<3;j++){
                ans[x][i] = ans[x][i]+a[x][j]*b[j][i];
            }
        }
    }
    printf("Product of the matrices is: \n\n");
    for(int i=0;i<3;i++){
        printf("\n");
        for(int j =0;j<3;j++){
            printf("%d ",ans[i][j]);
        }
    }
    return 0;
}