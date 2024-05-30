#include<stdio.h>
#define MEAN(a,b) ((a+b)/2.0)
#define ABS(num) ((num>0)?num:(num*-1))
#define LOWER(ch) (ch+32)
#define BIGGEST(a,b,c) ((a>b&&a>c)?a:((b>c)?b:c))

int main(){
    int choice,num,repeat;
    float a,b,c;
    char ch;

    do
    {
        printf("1. Mean\n");
        printf("2. Absolute value\n");
        printf("3. Upper to Lower\n");
        printf("4. Biggest Number\n");
        scanf("%d",&choice);

    switch (choice)
    {
    case 1:printf("Enter 2 numbers: ");
           scanf("%f%f",&a,&b);
           printf("Mean is: %0.2f\n",MEAN(a,b));
        break;
    case 2:printf("Enter a numbers: ");
           scanf("%d",&num);
           printf("Absolute value is: %d\n",ABS(num));
        break;    
    case 3:printf("Enter a uppercase letter: ");
           scanf("%c",&ch);
           printf("Lower case letter is: %c\n",LOWER(ch));
        break; 
    case 4:printf("Enter 3 numbers: ");
           scanf("%f%f%f",&a,&b,&c);
           printf("Biggest number is: %d\n",BIGGEST(a,b,c));
        break;           
    default:
       printf("Enter valid choice\n");
    }
printf("\n Do you want to continue? Ans: 0 or 1\n");
scanf("%d",&repeat);
    } while (repeat);
    return 0;
}