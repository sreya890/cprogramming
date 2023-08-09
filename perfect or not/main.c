#include <stdio.h>


int main()
{
   int num,rem,sum=0,i;
   printf("enter a number");
   scanf("%d",&num);
   for(i=1;i<num;i++)
   {
       rem=num%i;
       if (rem==0)
        sum=sum+i;
   }
   if (sum==num)
      printf("%d is a perfect number",num);
   else
      printf("%d is not a perfect number",num);

}
