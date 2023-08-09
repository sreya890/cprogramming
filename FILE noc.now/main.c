#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp1, *fp2;
    char ch;
    int noc = 0, now = 0;

    fp1 = fopen("AA.txt", "w");
    putc(ch, fp1);
    fclose(fp1);

    fp2 = fopen("AA.txt", "r");
    while ((ch = getc(fp2)) != EOF)
    {
        noc++;
        if (ch == '\0')
        {
            now++;
        }
        if (ch == 'n')
        {
            noc++;
        }
    }
    fclose(fp2);

    printf("Number of characters: %d\n", noc);
    printf("Number of occurrences of 'n': %d\n", now);

    return 0;
}
