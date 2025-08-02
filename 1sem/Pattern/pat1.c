#include<stdio.h>
int i,j;
int uptriangle(int n)
{
    for(i=1;i<=n;i++)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");

    }


}
int downtriangle(int n)
{
    for(i=n;i>=1;i--)
    {
        for(j=1;j<=i;j++)
        {
            printf("* ");
        }
        printf("\n");

    }

}
void main()
{
    int n,op;
    printf("Enter the height of the triangle:");
    scanf("%d",&n);
    printf("Enter:\n1.For up triangle\n2.For down triangle\n");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        uptriangle(n);
        break;
        case 2:
        downtriangle(n);
        break;
        default:
        printf("Invalid choice!");
        break;
    }


    
}