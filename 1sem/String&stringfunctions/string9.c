#include<stdio.h>
#include<stdlib.h>
#include<string.h>
// void main()
// {
//     char *name;
//     name=(char*)malloc(10*sizeof(char));
//     if(name==NULL)
//     {
//         printf("Memory allocation failed!");
//         return;
//     }
//     start:
//     printf("Enter the string is:");  
//     gets(name);
//     printf("The reverse of the sting is %s\n",strrev(name));
//     free(name);
//     goto start;
// }

void main()
{
    char *str1,*str2;
    str1=(char*)malloc(10*sizeof(char));
    if(str1==NULL)
    {
        printf("Memory Allocation Failed!");
        return;
    }
    str2=(char*)malloc(10*sizeof(char));
    if(str2==NULL)
    {
        printf("Memory Allocation Failed!");
        return;
    }
    printf("Enter first string:");
    gets(str1);
    printf("Enter second string:");
    gets(str2);
    int op;
    start:
    printf("\nChoose your operation:\n1.Length of strings\n2.String compare\n3.String reverse\n4.String concat\n5.string copy\n6.String uppercase\n7.string lower case.");
    printf("\nYour Choice:");
    scanf("%d",&op);
    switch(op)
    {
        case 1:
        printf("The length of the first string is %d\n",strlen(str1));
        printf("The length of second string is %d",strlen(str2));
        goto start;
        case 2:
        if(strcmp(str1,str2)==0)
        {
            printf("Both strings are equal.");
        }
        else
        {
            printf("Strings are different.");
        }
        goto start;
        case 3:
        printf("The reverse of the first string is %s\n",strrev(str1));
        printf("The reverse of second string is %s",strrev(str2));
        goto start;
        case 4:
        printf("The concat of those strings is %s",strcat(str1,str2));
        goto start;
        case 5:
        char str3[10];
        strcpy(str3,str1);
        printf("The third string is %s",str3);
        goto start;
        case 6:
        printf("The first string in upper case is %s\n",strupr(str1));
        printf("The second string in upper case is %s",strupr(str2));
        goto start;
        case 7:
        printf("The first string in lower case is %s\n",strlwr(str1));
        printf("The second string in lower case is %s",strlwr(str2));
        goto start;
        default:
        printf("Invalid choice!");
        goto start;


    
    }


}