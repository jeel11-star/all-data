#include <stdio.h>
int main(){
    float a;
     printf("Enter the value of celcius: ");
    scanf("%f", &a);
    printf("The temperture in Fahrenheit: %f",(9.0/5.0) * a + 32);

    float b;
    printf("\nenter your salary: ");
    scanf("%f", &b);
    printf("Gross salary: %f",( b * 0.050 + b * 0.080 + b * 0.10) + b);

    float c,d;
    printf("\nFirst angle: ");
    scanf("%f", &c);
    printf("\nSecond angle: ");
    scanf("%f", &d);
    printf("Third angle is %f", 180-c-d);

    return 0;
};