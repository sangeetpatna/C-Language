// To find the simple interest and the total amount
#include <stdio.h>
int main(){
    float p,r,t,SI;
    printf("Enter the Principal amount : ");
    scanf("%f",&p);
    printf("Enter the interest rate per annum : ");
    scanf("%f",&r);
    printf("Enter the time interval : ");
    scanf("%f",&t);
    SI=(p*r*t)/100;
    printf("The Simple Interest is %f\n",SI);
    printf("The total amount is %f",p+SI);
    return 0;
}