#include <stdio.h>


int main()
{
   int a,b,c,d;
   printf("enter three numbers");
   scanf("%d %d %d",&a,&b,&c);
   d=a+b+c;
   printf("sum:%d/n",d);
   d=a*b*c;
   printf("product:%d/n",d);
   d=(a+b+c)/3;
   printf("average:%d/n",d);

}
