#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c,d;
    for(a =1;a<=30;a++){
        for(b=a;b<=30;b++){
            int sum1 = a*a*a + b*b*b;
            for(c=a+1;c<=30;c++){
                for(d =c;d<=30;d++){
                    int sum2 = c*c*c+d*d*d;
                    if(sum1 == sum2 && a!=b && a!=c && a!=d && b!=c && b!=d && c!=d){
                     printf("Ramanujan numbers are: %d\n",sum1);
                     }
                    }
                }
            }
        }
        return 0;
    }