#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[2][2],b[2][2],c[2][2],i,j;
   printf("enter the a matrix");
   for(i=0;i<2;i++)
   {
       for(j=0;j<2;j++)
       {
           scanf("%d",&a[i][j]);
       }

    {
     printf("enter the b matrix");
     }
     for(i=0;i<2;i++)
     {
         for(j=0;j<2;j++)
         {
             scanf("%d",&a[i][j]);
         }
     }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
    {
      c[i][j]=a[i][j]+b[i][j];
    }
    }
    printf("added matrix is:%d",c[i][j]);
}
