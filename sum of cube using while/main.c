#include <stdio.h>


int main()
{
    int i,n,a,sum=0;
    printf("enter the value of n:");
    scanf("%d",&n);
    i=1;
    while(i<n)
    {
        printf("%d\n",i);
        a=pow(i,3);
        sum=sum+a;
        i++;
    }
    printf("sum is:%d",sum);
}
