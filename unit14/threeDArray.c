#include<stdio.h>
int main(){
    int threed[3][2][3] = {
        {
            {3,2,1},{6,7,8}
        },
        {
            {4,5,9},{10,11,12}
        },
        {
            {13,14,15},{16,17,18}
        }
    };
    printf("The first element of the 3-D Array is: %d\n",threed[0][0][0]);
    printf("The last element of the 3-D Array is: %d",threed[2][1][2]);
}