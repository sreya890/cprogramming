#include <stdio.h>
#include <stdlib.h>

int main()
{

   int i;
   for(i=1;i<100;i++)
   {
       i=i;
       printf("%d\n",i);
   }
    printf("%d\n",i);
    printf("END");

}
