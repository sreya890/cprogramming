#include <stdio.h>
#include <stdlib.h>

int main()
{
 int a[5],n,i,key,flag;
 printf("enter the n value");
 scanf("%d",&n);
 printf("enter the array\n");
 for(i=1;i<5;i++)
  scanf("%d",&a[i]);
  printf("enter the key value\n");
  scanf("%d",&key);

  {
      if(a[i]==key)
        flag=1;

  }
  {
      if(flag==1)
        printf("key value found");

   else{
    printf("key value not found");
   }
  }
}
