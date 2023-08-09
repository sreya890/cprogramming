#include <stdio.h>
#include <stdlib.h>

int main()
{
 int n,i,first,mid,last,key,a[10];
 printf("enter the n value");
 scanf("%d",&n);
 printf("enter %d integers");
 for(i=0;i<n;i++)
 {
     scanf("%d",&a[i]);
 }
    printf("enter the key value to found");
    scanf("%d",&key);
    first=0;
    last=n-1;
    mid=(first+last)/2;
    while(first<=last)
    {
        if(a[mid]<key)

         first=mid+1;
         }


 }
     else if(a[mid]==key)

    printf("key value found at location %d\n",key,mid+1);


 }
 else
    last=mid-1;
    mid=last+first/2;

}
if(first>last)
    printf("no value found");
