#include<stdio.h>
int main(){
    int i = 0;
    char ascii;
    while(i<=255){
       printf("%c = %d\n", i, i);
       i++;
    }
    return 0;
}