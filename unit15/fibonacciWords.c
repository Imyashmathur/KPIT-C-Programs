#include<stdio.h>
#include<string.h>

int main(){
    char str[50];
    char lastbutoneterm[50] = "A";
    char lastterm[50] = "B";
    for(int i =0;i<=5;i++){
        strcpy(str,lastterm);
        strcat(str,lastbutoneterm);
        printf("%s\n",str);
        strcpy(lastbutoneterm,lastterm);
        strcpy(lastterm,str);
    }
    return 0;
}