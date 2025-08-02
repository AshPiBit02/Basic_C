#include <stdio.h>
void main()
{
    int operation;
    int A, B;
    printf("Enter 1st input(1 or 0):\n");
    scanf("%d", &A);
    printf("Enter 2nd input(1 or 0):\n");
    scanf("%d", &B);
    printf("Choose operation\n 1.AND Gate \n 2.OR Gate \n 3.NOT Gate\n 4.NAND Gate \n 5.NOR Gate \n 6.X-OR Gate \n 7.X-NOR Gate \n Input:");
    scanf("%d", &operation);
    switch (operation)
    {
    case 1:
        if ((A != 1 || 0) && (B != 1 || 0))
        {
            printf("Invalid input!");
            break;
        }
        else
        {
            if (A == 1 && B == 1)
            {
                printf("The output is 1.");
                break;
            }
            else
            {
                printf("The output is 0.");
                break;
            }
        }
    case 2:
        if ((A != 1 || 0) && (B != 1 || 0))
        {
            printf("Invalid input!");
            break;
        }
        else
        {
            if (A == 1 || B == 1)
            {
                printf("The output is 1.");
                break;
            }
            else
            {
                printf("The output is 0.");
                break;
            }
        }
    case 3:
        if (A == 1)
        {
            printf("The output is 0.");
            break;
        }
        else if (A == 0)
        {
            printf("The output is 1.");
            break;
        }
    case 4:
        if ((A && B) == 1)
        {
            printf("The output is 0.");
            break;
        }
        else
        {
            printf("The output is 1.");
            break;
        }
    case 5:
        if ((A && B) == 0)
        {
            printf("The output is 1.");
            break;
        }
        else
        {
            printf("The output is 0.");
            break;
        }
    case 6:
        if ((A == 1 && B == 1) || (A == 0 && B == 0))
        {
            printf("The output is 0.");
            break;
        }
        else
        {
            printf("The output is 1.");
            break;
        }
    case 7:
        if ((A && B) == 1)
        {
            printf("The output is 1.");
            break;
        }
        else
        {
            printf("The output is 0.");
            break;
        }
    }
}