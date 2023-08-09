#include <stdio.h>


int main()
{
   int i,n,a,c,count=0;
   printf("enter the range of prime numbers");
   scanf("%d",&a);
   for(n=1;n<=a;n++)
   {
       for(i=1;i<=a;i++)
    {
     c=n%i;
     if(c==0)
     {
      count=count+1;
     }
    }
    if(count==2)
    {
     printf("%d\n",n);
    }
    count=0;
  }
}
