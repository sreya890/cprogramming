#include <stdio.h>


int main()
{
    int a=10,b;
    b=a--;
    printf("post decrement:%d\n",b);
    b=--a;
    printf("pre decrement:%d",b);
    }
