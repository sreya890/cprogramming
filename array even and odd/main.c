#include <stdio.h>


int main()
{
  int a[10],n,i;
  printf("Enter the value for n:");
  scanf("%d",&n);
  printf("Enter the array elements:");
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("Even numbers in the array:");
  for(i=0;i<n;i++)
  {
      if(a[i]%2==0)
        printf("%d\t",a[i]);
 }
  printf("\nOdd numbers in the array:");
  for(i=0;i<n;i++)
  {
      if(a[i]%2!=0)
        printf("%d\t",a[i]);
  }



}
