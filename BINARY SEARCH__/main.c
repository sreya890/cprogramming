#include<stdio.h>
int RecursiveLS(int arr[], int value, int index, int n)
{
int pos = 0;
if(index >= n)
{
return 0;
}
else if (arr[index] == value)
{
pos = index + 1;
return pos;
}
else
{
return RecursiveLS(arr, value, index+1, n);
}
return pos;
}
int main()
{
int a[100],n,x,i,s=0;
printf("\n\n LINEAR SEARCH \n");
printf("\n Enter the Number of terms in the Array: ");

scanf("%d",&n);
printf("\n");
for(i=0;i<n;i++)
{
printf(" Enter the value of A[%d] : ",i+1);
scanf("%d",&a[i]);
}
printf("\n Enter the term that you want to search: ");
scanf("%d",&x);
printf("Searching without recursion ");
for(i=0;i<n;i++)
if(a[i]==x)
{
s=i+1;
printf("\n The given Number %d is found in the %d position.",x,s);
}
if(s==0)
printf("\n The given Number %d is not found in the Array. ",x);
s = RecursiveLS(a, x, 0, n);
printf("\nSearching with recursion ");
if (s != 0)
{
printf("\n The given Number %d is found in the %d position.",x,s);
}
else
{
printf("\n The given Number %d is not found in the Array. ",x);
}
 return 0;
}
