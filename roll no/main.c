#include <stdio.h>


int main()

{

    int rno,s1,s2,s3,s4,s5,total,average;
    char name[10];
    printf("enter the rno and name");
    scanf("%d",&rno);
    scanf("%s",name);
    printf("enter five subjects marks");
    scanf("%d %d %d %d %d",&s1,&s2,&s3,&s4,&s5);
    total=s1+s2+s3+s4+s5;
    printf("total is %d",total);
    average=(s1+s2+s3+s4+s5)/5;
    printf("average is %d",average);
        return 0;
}
