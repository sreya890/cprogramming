#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum=0;
    printf("enter the value:");
    scanf("%d",&n);
    i=1;
    while(i<=n)
    {
        printf("%d\n",i);
        sum=sum+(i*i);
        i++;
    }
    printf("sum is:%d",sum);
}
