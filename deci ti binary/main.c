#include <stdio.h>


int main()
{
    int binary=0,num,base=1,rem;
    printf("enter the decimal number");
    scanf("%d",&num);
    while(num>0)
    {
     rem=num%2;
     binary=binary+rem*base;
     num=num/2;
     base=base*10;
    }
    printf("binary value of the given decimal value is:%d",binary);
}
