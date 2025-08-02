// Write a program to store roll no., Name, class, section and stream of 3 students in a file bactch and also display them.
#include <stdio.h>
void main()
{
    FILE *s;
    s = fopen("batch.txt", "w");
    int n, class;
    int roll;
    char name[100];
    char section[100];
    char stream[100];
    int i;
    for (i = 0; i < n; i++)
        printf("Enter no. of students: ");
    scanf("%d", &n);
    {
        printf("Enter rollno.,name, class, section & stream of the student: ");
        scanf("%f%s%d%s%s", &roll, &name, &class, &section, &stream);
        fprintf(s, "\n%d\t%s  \t%d\t%s \t%s", roll, name, class, section, stream);
    }
    fclose(s);
    s = fopen("batch.txt", "r");
    while (fscanf(s, "%d%s%d%s%s", &roll, &name, &class, &section, &stream) != EOF)
    {
        printf("\n%d\t%s  \t%d\t%s\t%s", roll, name, class, section, stream);
    }
    fclose(s);
}