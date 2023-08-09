#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a,b,max;
 printf("enter 2 numbers");
 scanf("%d %d",&a,&b);

 if(a==b)
    printf("both the numbers are equal");
 else
    max=(a>b)?a:b;
  printf("the largest number is:%d",max);
}
