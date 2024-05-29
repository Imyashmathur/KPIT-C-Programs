#include<stdio.h>
void disk(int n,char from,char to,char aux){
    if(n==1){
        printf("\nShift disk 1 from peg %c to peg %c",from,to);
        return;
    }
    disk(n-1,from,aux,to);
    printf("\nShift disk %d from peg to %c to peg %c",n,from,to);
    disk(n-1,aux,to,from);
}
int main(){
    int n =4;
    disk(n,'A','C','B');
    return 0;
}