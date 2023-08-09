#include <stdio.h>


int main()
{
    int a,b;
    printf("enter the number");
    scanf("%d",&a);
    b=a%2;
    switch (b)
    {

    case 1:
    printf("it is odd");
    break;

    default:
    printf("it is even");
    }



