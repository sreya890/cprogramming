#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a;
    printf("enter a number");
    scanf("%d",&a);
    if(a%5==0)
        printf("divisible by 5");
    else if(a%11==0)
        printf("divisible by 11");
    else
        printf("end");
}
