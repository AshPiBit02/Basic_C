// WAP to create a file "myfile.txt" and store the roll no,name percentage of n students.Also display the record of students who have more than 60%.
#include <stdio.h>
#include <stdlib.h>
#define loop for (i = 0; i < n; i++)

struct student
{
    int roll_no;
    char name[50];
    float per;
};

void main()
{
    int n, i;
    printf("Enter the number of students: ");
    scanf("%d", &n);
    FILE *x;
    x = fopen("D:file\\myfile.txt", "w");
    if (x == NULL)
    {
        printf("File could not be opened for writing.");
        exit(1);
    }
    struct student a[n];
    loop
    {
        printf("Enter the roll no, name, and percentage of student[%d]:\n", i + 1);
        scanf("%d %s %f", &a[i].roll_no, a[i].name, &a[i].per);
        fprintf(x, "%d\t\t%s\t\t%.2f\n", a[i].roll_no, a[i].name, a[i].per);
    }
    fclose(x);

    x = fopen("D:file\\myfile.txt", "r");
    if (x == NULL)
    {
        printf("File doesn't exist.");
        exit(1);
    }
    printf("\nRoll_no\tName\tPercentage\n");

    // Reset i to 0 before reading from the file
    i = 0;
    while (fscanf(x, "%d %s %f", &a[i].roll_no, a[i].name, &a[i].per) != EOF)
    {
        if (a[i].per > 60)
        {
            printf("%d\t\t%s\t\t%.2f\n", a[i].roll_no, a[i].name, a[i].per);
        }
        i++;
    }
    fclose(x);
}