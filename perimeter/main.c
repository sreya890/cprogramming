#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,area,perimeter;
    printf("enter the side");
    scanf("%d",&a);
    area=a*a;
    perimeter=4*a;
    printf("area and perimeter of square %d %d",area,perimeter);
    return 0;

}
