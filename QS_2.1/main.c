#include <stdio.h>
#include <stdlib.h>

void main()
{
    void swap(int*,int*)
    int a=10,b=20;
    printf("before swap %d %d",a,b);
    swap(&a,&b);
    printf("after swap %d %d",a,b);
}
    void swap(int*p,int*a)
{
  int temp;
  temp=*p;
  *p=*q;
  *q=temp;
  return;
}








