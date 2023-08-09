#include <stdio.h>
#include <stdlib.h>

int main()
{
  int no,reminder,reverse=0,hun,tens,unit;
  printf("enter the number");
  scanf("%d",&no);
  hun=no/100;
  tens=((no/10)%10);
  unit=no%10;
  printf("%d hun\n %d tens\n %d unit\n",hun,tens,unit);

  while(no!=0)
    {reminder=no%10;
    reverse=reverse*10+reminder;
    no/=10;
    }
    printf("the reversed number=%d\n",reverse);
}
