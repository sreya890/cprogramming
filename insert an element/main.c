#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a[20],i,n,postion ,element;
   printf("enter the number of elements:");
   scanf("%d",&n);
   printf("enter the elements in an array:");
   for(i=0;i<n;i++)
   printf("%d",&a[i]);
   printf("enter the position of new element:");
   scanf("%d",&position);
   printf("enter the element:");
   scanf("%d",&element);
   for(i=1;i<n;i++)
    if(i>position)
    a[i]=a[i-1];
   else
   {
       if(i==position)
        a[i]=element;
       else
        a[i]=a[i];
    }
    {
        printf("array after inserting element");
        for(i=1;i<n;i++)
            scanf("%")
    }
   }
