#include <stdio.h>


int main()
{
    float a,b,c,det,r1,r2,real;
    printf("enter the value of coefficient a b c");
    scanf("%f %f %f",&a,&b,&c);
    det=b*b-4*(a*c);
    if(det>0)
    {
        r1=(-b+sqrt(det))/2*a;
        r2=(-b-sqrt(det))/2*a;
        printf("%f %f",r1,r2);
        printf("root are real");
    }
    else if(det==0)

       {
        r1=r2=-b/2*a;
        printf("%f,real");
        printf("roots are equal");
       }
    else
   {
      printf("roots are not equal");

   }








}
