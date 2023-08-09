#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,sum=i;
    for(i=1;i<5;i++)
    {
        sum=sum+i;
        printf("%d\n",i);
    }

    printf("sum is %d\n",sum);
    printf("end");
}
