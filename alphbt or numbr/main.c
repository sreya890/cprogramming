#include <stdio.h>
#include <stdlib.h>

int main()
{

   char x;
   printf("enter the character");
   scanf("%c",&x);
   if (x>='a'&&x<='z'||x>='A'&&x<='Z'){
     printf("alphabet");
   }


   else if (x>='0'){
        printf("number");


   }

   else
        {
            printf("symbol");

        }
}

