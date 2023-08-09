#include <stdio.h>

int main()
{
    float c,f;
    printf("enter the temperature in centigrade:");
    scanf("%f",&c);
    f=(c*1.8)+32;
    printf("the temperature in Fahrenheit:%f\n",f);
    printf("enter the temperature in fahrenheit:");
    scanf("%f",&f);
    c=(f-32)/1.8;
    printf("the temperature in centigrade:%f",c);










}
