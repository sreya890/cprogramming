#include <stdio.h>


int main()
{
  char op;
  int a,b,c;
  printf("enter the operation");
  scanf("%c",&op);
  switch(op)
  {
    case'+':
    {
        printf("enter the two values");
        scanf("%d %d",&a,&b);
        c=a+b;
        printf("%d",c);
        break;

    }
    case'-':
     {
         printf("enter two values");
         scanf("%d %d",&a,&b);
         c=a-b;
         printf("%d",c);
         break;
     }
    case'*':
      {
          printf("enter the two values");
          scanf("%d %d",&a,&b);
          c=a*b;
          printf("%d",c);
          break;
      }
    case'%':
      {   printf("enter the two values");
          scanf("%d %d",&a,&b);
          c=a/b;
          break;

        }

  }

}
