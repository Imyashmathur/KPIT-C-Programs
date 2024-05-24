#include<stdio.h>
int circular(int *a,int *b,int *c);
int main(){
    int x,y,z;
    printf("Enter the values of x, y & z :");
    scanf("%d%d%d", &x, &y, &z);
     printf("Before Shift: x = %d\ny=%d\nz=%d\n",x,y,z);
    circular(&x,&y,&z);
    printf("After Shift: x = %d\ny=%d\nz=%d\n",x,y,z);
}
int circular(int *a,int *b,int *c){
   int temp;
   temp = *c;
   *c = *b;
   *b = *a;
   *a = temp;

}