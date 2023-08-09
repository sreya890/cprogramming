#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1;
    char ch;
    fp1 = fopen("AA.txt", "r");
    if (fp1 == NULL) {
        printf("Error opening file.\n");

    }
    else
  {
    while (fscanf(fp1,"%c",&ch)!=EOF) {
        {
            printf("%c",ch);
        }
    }

    return 0;
}

}
