// WAP to initialize any 2x3 matrix at compile time and display the address and value stored in it.
// Also display the address of the element at index [1][1] separately.
#include <stdio.h>
#define loop1 for(i=0;i<2;i++)
#define loop2 for(j=0;j<3;j++)
void main()
{
    int i,j;
    int n[2][3]={{1,2,3},{4,5,6}};
    printf("Array Index\t\t\t Address \t\t\t Elements value\n");
    printf("....................................................................\n");
    loop1
    {
        loop2
        {
            printf("n[%d][%d] \t\t\t %u\t\t\t%d\n",i,j,*(n+i)+j,*(*(n+i)+j));
        }
    }
    printf("......................................................................\n");
    printf("Now showing only the address and value of [1][1] element\n");
    printf("Address:%u\n",*(n+1)+1);
    printf("Value:%d\n",*(*(n+1)+1));
}