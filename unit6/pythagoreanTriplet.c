#include<stdio.h>
#include<math.h>
int main(){
    int x,y;
    float z;
    for(int x = 1;x<=30;x++){
        for(int y = 1;y<=30;y++){
            z = sqrt(x*x+y*y);
           if(z == (int)z){
            printf("(%d,%d,%d)\n",x,y,(int)z);
           }
        }
    }
}