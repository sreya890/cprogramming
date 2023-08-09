#include <stdio.h>

int main()
{
   int num,originalnum,rem,result=0;
   printf("Enter a three-digit number: ");
   scanf("%d",&num);
   originalnum=num;
   while(originalnum!=0)
   {
       rem=originalnum%10;
       result=result+(rem*rem*rem);
       originalnum/=10;
    }
    if (num==result)
   {
       printf("%d is an Armstrong number",num);
   }
  else
   {
       printf("%d is not an Armstrong number",num);
   }
   return 0;
}

