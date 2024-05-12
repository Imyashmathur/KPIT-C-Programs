#include<stdio.h>
int main(){
    int width = 1189;
    int height = 841;
    printf("A0 %dx%d",width,height);
    for(int i = 1;i<=8;i++){
        int newWidth = height;
        int newHeight = width/2;
        printf("A%d:%dx%d\n",i,newWidth,newHeight);
        width = newWidth;
        height = newHeight;
    }
    return 0;
}