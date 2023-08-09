#include <stdio.h>
#include <stdlib.h>

int main()
{
   void swap(int,int);
   int a=10,b=20;
   printf("before swap %d %d",a,b);
   swap(a,b);
}
   void swap(int p,int q)
   {
       int temp;
       temp=p;
       p=q;
       q=temp;
       printf("after swap %d %d",p,q);
       return;
   }


