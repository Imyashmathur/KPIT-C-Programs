#include<stdio.h>
#include<string.h>
void xstrrev(char *ss);
int main(){
    char str[][35] = {
        "To ere is human..",
        "But to really mess things up...",
        "One needs to know C!!"
    };
    for(int i = 0;i<=2;i++){
        xstrrev(str[i]);
        printf("%s\n",str[i]);
    }
    return 0;
}

void xstrrev(char *s){
    int l;
    char *t,temp;
    l = strlen(s);
    t = s+l-1;
    for(int i = 0;i<=l/2;i++){
        temp = *s;
        *s = *t;
        *t = temp;
        s++;
        t--;
    }
}