#include <stdio.h>
#include <stdlib.h>

int main()
{
  int n,i,j,isprime;
  printf("enter a positive integer:");
  scanf("%d",&n);
  printf("prime numbers upto:%d\n");
  for(i=2;i<-n;i++)
  {
      isprime=1;
      for(j=2;j<=i/2;j++)

  {
        if(i%j==0)
            isprime=0;
          }  break;
  }
  {
    if(isprime)
            printf("%d",i);
   if(i%2==0)
   {
       printf("even ")
   }
  }
}
