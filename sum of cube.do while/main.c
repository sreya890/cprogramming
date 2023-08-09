#include <stdio.h>


int main()
{
   int i,n,a,sum=0;
   printf("enter the value of n:");
   scanf("%d",&n);
   for(i=0;i<=n;i++)
   {
       printf("%d\n",i);
       a=pow(i,3);
       sum=sum+a;
   }
   printf("sum is:%d",sum);
}
