
#include <stdio.h>
#include <stdlib.h>

int main()
{
    int f1,f2,f3,i,n;
    printf("Enter the value of n:");
    scanf("%d",&n);
    f1=0;
    f2=1;
    printf("The series is:\n");
    i=0;
    while(i<n)
    {
        printf("%d",f1);
        f3=f1+f2;
        f1=f2;
        f2=f3;
        i++;
    }
}

