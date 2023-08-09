#include <stdio.h>
#include <stdlib.h>

 void main(int argc,char*argv[])
{
    printf("program name is:%s\n",argv[0]);

    if (argc<2)
    {
        printf("no argument is passed through command line\n");

    }
    else
    {
        printf("first argument is passed:%s\n",argv[1]);
    }
    }
