#include <stdio.h>


int main()
{
   int dec=0,rem,num,base=1;
   printf("enter the binary number");
   scanf("%d",&num);
   while(num>0)
   {
      rem=num%10;
      dec=dec+rem*base;
      num=num/10;
      base=base*2;
   }
  printf("decimal value of the given binary number is:%d",dec);

}



