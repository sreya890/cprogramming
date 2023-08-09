#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b;
   printf("the numbers are:");
   scanf("%d %d",&a,&b);
   a=a+b;
   b=a-b;
   a=a-b;
   printf("the numbers are:%d %d",a,b);




}
