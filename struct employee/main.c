#include <stdio.h>
#include <stdlib.h>

int main()
{
  struct employee
  {
      int eno;
      char name[10];
      float basic,TA,HRA,IT;
      float gross,net;

  };

     struct employee e,*p;
     p=&e;
     printf("enter the eno");
     scanf("%d",&p->eno);
     printf("enter the name");
     scanf("%s",p->name);
     printf("enter the value of basic\n");
     printf("enter the value of TA\n");
     printf("enter the value of HRA\n");
     printf("enter the value of IT\n");
     scanf("%f %f %f %f",&p->basic,&p->TA,&p->HRA,&p->IT);
     p->gross=p->basic+p->TA+p->HRA;
     p->net = p->gross - p->IT;
     printf("%f",p->gross);
     printf("%f",p->net);
     }




