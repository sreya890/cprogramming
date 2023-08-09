#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    int i,j;
    printf("enter the string");
    scanf("%s",str);
    for(i=0;str[i]!='\0';i++)
    {
        while(!(str[i]>='a'&&str[i]<='z')&&!(str[i]>='A'&&str[i]<='Z')&&str[i]!='\0')
      {

        for(j=i;str[j]!='\0';++j)
      {
          str[j+1]=str[j];
      }

      str[j]='\0';
  }

   }
   printf("the string obtained after removing non alphabetic character is:%s\n",str);

}
