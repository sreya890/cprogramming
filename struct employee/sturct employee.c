#include <stdio.h>
#include <stdlib.h>

int main()
{
    struct employee
    {
        int eno;
        char name[10];
        float basic, TA, HRA, IT;
        float gross, net;
    };

    struct employee e, *p;
    p = &e;
    printf("enter the eno: ");
    scanf("%d", &p->eno);
    printf("enter the name: ");
    scanf("%s", p->name);
    printf("enter the values of basic, TA, HRA, IT: ");
    scanf("%f %f %f %f", &p->basic, &p->TA, &p->HRA, &p->IT);
    p->gross = p->basic + p->TA + p->HRA;
    p->net = p->gross - p->IT;
    printf("gross = %f\n", p->gross);
    printf("net = %f\n", p->net);
    return 0;
}





