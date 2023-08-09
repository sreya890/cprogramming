#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,n,sum=0;
   printf("enter the value of n:");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       printf("%d\n",i);
       sum=sum+(i*i);
   }
   printf("sum of squares:%d",sum);
}
