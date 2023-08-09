#include <stdio.h>
#include <stdlib.h>

int main()
{
    void swap(int a,int b);
    int x=5,y=10;
    printf("before swapping %d %d\n",x,y);
    swap(x,y);
    printf("sfter swapping %d %d\n",x,y);
}
void swap(int a,int b);

  a=a+b;
  b=a-b;
  a=a-b;
  printf("swapped number:%d %d",a,b);

}
