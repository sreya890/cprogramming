#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10],i,max;
    printf("enter the value of array a:");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    max=a[0];
    for(i=1;i<10;i++)
    {
        if(a[i]>max)
        max=a[i];
    }
    printf("largest element is:%d",max);

}
