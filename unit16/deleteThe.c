#include<stdio.h>
#include<string.h>


int main(){
    char str[100];
    puts("Enter a string : ");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
          if ((str[i] == 't' || str[i] == 'T') &&
            (str[i + 1] == 'h' || str[i + 1] == 'H') &&
            (str[i + 2] == 'e' || str[i + 2] == 'E') &&
            (str[i + 3] == ' ' || str[i + 3] == '\0')){
        for(int j = 0;str[j]!='\0';j++){
            str[j] = str[j+4];
        }
        i--;
    }
    }
    printf("After removing all the occurences of 'the: \n");
    puts(str);
    return 0;
}