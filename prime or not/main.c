#include <stdio.h>


int main()
{
   int i,n,c,count=0;
   printf("enter the value of n");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       c=n%i;
       if(c==0)
        count=count+1;
    }
    if(count==2)
         printf("prime");
    else
        printf("composite");



}
