#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[5],n,i,j,temp;
   printf("enter the value of n;");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
    for(i=0;i<5;i++)
    {
      for(j=0;j<5;j++)
      {
        if(a[i]>a[j])
        {
            temp=a[i];
            a[i]=a[j];
            a[j]=temp;
        }
    }
  }
   for(i=0;i<n;i++)
   {
       printf("%d",a[i]);
   }
}
