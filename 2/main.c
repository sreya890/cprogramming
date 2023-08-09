#include <stdio.h>
#include <stdlib.h>

int main()
{
 char a[10],b[10];
 int ch,len;
 printf("enter the string a");
 scanf("%s",a);
 printf("enter the string b");
 scanf("%s",b);
 while(1)
    printf("choose your option\n1.length \n2.compare \n3. copy \n4concatenate");
    printf("enter your choice");
    switch(ch)
    {
    case 1:
        len=strlen(a);
        printf("%d\n",len);
        break;
    case 2:
        if(strcmp==0)
           {
               printf("both the strings are equal");
           }
           else if(strcmp<0)
           {
               printf("%s is greater than %s\n",a,b);
           }
           else
            {
                printf("%s is greater than %s\n"b,a);
            }
           break;
      case 3:
        printf("str 1 %s\n", a);
        printf("str 2 %s\n", b);
        strcpy(a, b);
        printf("str 1 %s\n", a);
        printf("str 2 %s\n", b);
        break;
      case 4:
        printf("str 1 %s\n", a);
        printf("str 2 %s\n", b);
        strcat(a, b);
        printf("concatenated string: %s\n", a);
        break;
      default:
        printf("Invalid choice\n");
        break;
    }
  }
}
