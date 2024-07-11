// To convert celsius into fahrenheit (temperature measures)
#include <stdio.h>
int main(){
    float c;
    printf("Enter temperature in degree celsius : ");
    scanf("%f",&c);
    printf("The measurement of temperature in Fahrenheit is %f",(((9.0/5.0)*c)+32));
    return 0;
}
