#include <stdio.h>


int main()
{
 int a,b;
 printf("enter two numbers");
 scanf("%d %d",&a,&b);
 printf("a=%d\n",a);
 printf("b=%d\n",b);
 a=a^b
 b=a^b
 a=a^b
 printf("two numbers after swapping\n");
 printf("a=%d\n",a);
 printf("b=%d\n",b);


}
