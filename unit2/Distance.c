#include<stdio.h>
#include<math.h>
int main(){
    float L1,L2,G1,G2,D;
    printf("Enter the latitudes(L1,L2):");
    scanf("%f%f",&L1,&L2);
    printf("Enter the longitude(G1,G2):");
    scanf("%f%f",&G1,&G2);
    D = 3963*acos(sin(L1)*sin(L2)+cos(L1)*cos(L2)*cos(G2-G1));
    printf("The distance between them in nautical miles is : %f",D);
}