#include <stdio.h>


int main()
{
   int hcf,lcm,a,b,c,n1,n2;
   printf("enter any two numbers:");
   scanf("%d %d",&n1,&n2);
   a=n1;
   b=n2;
   while(b>0)
   {
       c=b;
       b=a%b;
       a=c;
   }
     printf("HCF is:%d\n",a);
     1cm=(n1*n2)/a;
     printf("LCM is:%d",1cm);
}
