#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c;
   printf("enter the 2 numbers");
   scanf("%d %d",&a,&b);
   c=a+b;
   printf("sum is %d\n",c);
   c=a-b;
   printf("difference is %d\n",c);
   c=a*b;
   printf("product is %d\n",c);
   c=a/b;
   printf("quotient is %d\n",c);
   c=a%b;
   printf("modulus is %d",c);

}
