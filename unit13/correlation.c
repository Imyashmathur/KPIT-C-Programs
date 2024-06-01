#include<stdio.h>
#include<math.h>
 double x_value[] = {34.22,39.87,41.85,43.23,40.06,53.29,53.29,54.14,49.12,40.71,55.15};
 double y_value[] = {102.43,100.93,97.43,97.81,98.32,98.32,100.07,97.08,91.59,94.85,94.65};

int main(){
    
    int n = sizeof(x_value)/sizeof(x_value[0]);
    double sum_x=0,sum_y=0,sum_x_square=0,sum_y_square=0,sum_xy=0;
    for(int i=0;i<n;i++){
        double x = x_value[i];
        double y = y_value[i];
        sum_x += x;
        sum_y += y;
        sum_x_square += x*x;
        sum_y_square += y*y;
        sum_xy += x*y;
    }
    double numerator = (sum_xy)-(sum_x*sum_y);
    double denominator_x = sqrt((n*sum_x_square)-(sum_x*sum_x));
    double denominator_y = sqrt((n*sum_y_square)-(sum_y*sum_y));
    double r = numerator/(denominator_x*denominator_y);
    printf("Correlation coefficient r: lf\n",r);
    return 0;
  }