#include <stdio.h>


int main()
{
    int number,bs,da,ta,hra,gs,net;
    float it;
    char name[20];
    printf("enter the name,\n");
    scanf("%s",name);
    printf("enter the bs and employment number");
    scanf("%d %d",&bs,&number);
    printf("enter da and ta");
    scanf("%d %d",&da,&ta);
    printf("enter hra");
    scanf("%d",&hra);
    it=0.15*bs;
    bs=bs-it;
    printf("basic salary after reduction of it");
    gs=bs+da+ta+hra+it;
    printf("gross salary gs %d,gs");
    net=bs+da+ta+hra;
    printf("net salary:%d",net);





}
