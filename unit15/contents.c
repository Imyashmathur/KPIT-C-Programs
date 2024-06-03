#include<stdio.h>
#include<string.h>

int main(){
    char input[] = "Alice in wonder land";
    char str1[20], str2[20], str3[20], str4[20];
    sscanf(input, "%s %s %s %s",str1,str2,str3,str4);

    printf("str 1 = %s\n", str1);
     printf("str 2 = %s\n", str2);
      printf("str 3 = %s\n", str3);
       printf("str 4 = %s\n", str4);
return 0;
}