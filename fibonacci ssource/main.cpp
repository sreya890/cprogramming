#include <iostream>

using namespace std;

int main()
{
   int i,first=4,second=5,third;
   for(i=0;i<6;i++)
   {

    third=first+second;
    printf("%d\n",third);
    first=second;
    second=third;
}   }
