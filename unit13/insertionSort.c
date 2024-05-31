#include<stdio.h>
int main(){
    int arr[25] = { 235 ,346 ,43, 6,34 ,3 ,4 ,63 ,63 ,6 ,46 ,34 ,4 ,6 ,346 ,3 ,5,3 ,636,34 ,6 ,4,36 ,36 ,346};
    int c,d,t,n=25;
    for(c = 1;c<n;c++){
        d = c;
        while(d>0&&arr[d]<arr[d-1]){
            t = arr[d];
            arr[d] = arr[d-1];
            arr[d-1] = t;
            d--;
        }
    }
    printf("The sorted list as per insertion sort is: \n");
    for(c=0;c<n;c++){
        printf("%d\n",arr[c]);
    }
    return 0;
}