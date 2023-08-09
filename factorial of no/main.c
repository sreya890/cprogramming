#include <stdio.h>
#include <stdlib.h>

int main()
{
   int i,N,FACT=1;
   printf("enter the number");
   scanf("%d",&N);
   for(i=1;i<=N;i++)
    FACT=FACT*i;
    printf("factorial of %d is %d",N,FACT);




}
