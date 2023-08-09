#include <stdio.h>
#include <stdlib.h>

struct student {
    int rno;
    char name[10];
    char grade;
    int m1, m2, m3;
    int total;
    float average;
};

int main() {
    int n, i;
    printf("Enter the number of students:\n");
    scanf("%d", &n);
    struct student s[n];
    for(i=0; i<n; i++) {
        printf("Enter the name:\n");
        scanf("%s", s[i].name);
        printf("Enter the roll number:\n");
        scanf("%d", &s[i].rno);
        printf("Enter the marks for 3 subjects:\n");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);
        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;
        printf("The total marks is: %d\n", s[i].total);
        s[i].average = s[i].total / 3.0;
        printf("The average is: %f\n", s[i].average);
    }
    return 0;
}

