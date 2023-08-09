#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100],a[100],b[100],c[100];
    printf("enter the string 1");
    scanf("%s",&str);
    printf("enter the string 2");
    scanf("%s",&a);
    printf("enter the sting 3");
    scanf("%s",&b);
    printf("enter the string 4");
    scanf("%d",&c);
    printf("the length of the string is:%d\n",strlen(str));
    printf("the copied value is:%s\n",strcpy(c,str));
    printf("the combined string is:%s\n",strcat(a,str));
    printf("\nstrcmp(str,a):%d\n",strcmp(str,a));
}
