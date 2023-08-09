#include <stdio.h>


int main()
{
    int i,n,sum=0,a;
    printf("enter the values of n");
    scanf("%d",&n);
    for(i=0;i<=n;i++)
    {
        printf("%d\n",i);
        a=pow(i,3);
        sum=sum+a;
    }
    printf("sum is:%d",sum);
}
