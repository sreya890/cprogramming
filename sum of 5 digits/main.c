#include <stdio.h>

int main()
{
    int a,sum=0,rem;
    printf("enter a 5 digit number:");
    scanf("%d,&a");
    while(a>0)
      {
          rem=a%10;
          sum=sum+rem;
          a=a/10;
      }
       printf("sum of 5 digit is :%d",sum);
}
