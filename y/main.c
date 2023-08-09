#include <stdio.h>
#include <stdlib.h>

int main()
{
 char c[100];
 int i,j;
 printf("enter the string");
 gets(c);
 scanf("%s",&c);
 for(i=0;j=0;c[i]!='\0';i++)
 {
     if((c[i]>65&&c[i]<=90)||(c[i]>=97&&c[i]<=122))
     {
       c[j++]=c[i];
     }
   }
   c[j]='\0';
   printf("string after removal:%s",c);

}

