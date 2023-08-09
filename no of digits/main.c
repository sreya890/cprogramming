#include <stdio.h>


int main()
{
    int a,b,count=0,c;
    printf("enter a number:");
    scanf("%d",&a);
    b=a;
    while(b>0)
    {
        c=a%10;
        b/=10;
        count++;
    }
    printf("no of digit is:%d",count);
}
