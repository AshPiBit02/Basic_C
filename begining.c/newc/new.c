//Program to read two matrices from user and multiply then if possible.
#include<stdio.h> 
void main ()
{
    int a[10] [10], b[10] [10], s[10] [10];
    int m,n,l,p,i,j,k;
    printf("Enter row of first matrix(<=10) : \t");
    scanf("%d",&m);
    printf("Enter column of first matrix(<=10) : \t");
    scanf("%d",&n);
    printf("Enter row of second matrix(<=10) : \t");
    scanf("%d",&l);
    printf("Enter column of second matrix(<=10) : \t");
    scanf("%d",&p);
    if(n!=1)
    
        printf("Multiplication is not possible :");
    
    else 
    {
        printf("Multlipication is possible :");
        for(i=1;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                printf("Enter a[%d] [%d] : \t",i,j);
                scanf("%d",&a [i] [j]);
            }
        }
        
       printf("Enter second matrix : \n");
       for(i=0;i<1;i++)
       {
        for(j=0;j<p;j++)
        {
            printf("Enter b[%d] [%d] :\t",i,j);
            scanf("%d",&b[i] [j]);
            
        }
       }
       /*performing multiplication */
       for(i=0;i<m;i++)
       {
        for(j=0;j<p;j++)
        {
            s[i] [j]=0;
            for (k=0;k<n;k++)
            {
                s[i] [j]= s[i] [j]+a[i][k]*b[k][j];
            }
        }
       }
       /*displaying result*/
       printf("The matrix multiplication is :\n");
       for(i=0;i<m;i++)
       {
        for(j=0;j<p;j++)
        {
            printf("%d\t",s[i] [j]);
        }
        printf("\n");
       }
        }
        /*end of else*/
      
       
}
/*end of main ()*/
