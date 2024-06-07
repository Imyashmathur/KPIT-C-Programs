#include<stdio.h>
#include<string.h>

int main(){
    char *str[] = {
        "Rajesh","Ashish","Milind",
        "Pushkar", "Akash"
    };
    char *t;
    for(int i =0;i<5;i++){
        for(int j = i+1;j<5;j++){
           if(strcmp(str[i],str[j])>0){
            t = str[i];
            str[i] = str[j];
            str[j] = t;
           }
        }
    }
    for(int i= 0;i<5;i++){
        printf("%s\t",str[i]);
    }
    return 0;
}