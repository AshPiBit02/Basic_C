// WAP to read n number of students from user and read the age of each student. Display the entered ages and their average value
// Use pointer instead of conventional array to represent ages of different students.
#include<stdio.h>
#include<stdlib.h>
void main()
{
    int n,sum=0,*p;
    float avg;
    printf("Enter the number of students:");
    scanf("%d",&n);
    p=(int*)calloc(n,sizeof(int));
    for(int i=0;i<n;i++)
    {
        printf("Enter the age of student[%d]:",i+1);
        scanf("%d",p+i);
        sum+=*(p+i);
    }
    printf("The ages are: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",*(p+i));
    }
    printf("\nThe sum of ages is: %d",sum);
    avg=sum/n;
    printf("\nThe average age of the students is %.2f",avg);
    free(p);
    

}