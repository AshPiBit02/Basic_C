// WAP to read names of n different persons and sort them in ascending order.
#include<stdio.h>
#include<string.h>
void main()
{
    int n,i,j; // Declare variables n, i, j for number of persons and loop counters
    printf("Enter the number of person:"); // Prompt user to enter the number of persons
    scanf("%d",&n); // Read the number of persons from user input and store in n
    char name[n][30],temp[40]; // Declare a 2D array to store names and a temporary array for swapping
    printf("Enter the names:\n"); // Prompt user to enter the names
    for(i=0;i<n;i++) // Loop to read each name
    {
        gets(name[i]); // Read a name from user input and store in name[i]
    }


    // Bubble sort algorithm to sort names in ascending order
    for(i=0;i<n;i++)
    { // Outer loop for each element
        for(j=i+1;j<n;j++) // Inner loop for comparing with next elements
        {
            if((strcmp(name[i],name[j]))>0) // Compare two names
            {
                strcpy(temp,name[i]); // Copy name[i] to temp
                strcpy(name[i],name[j]); // Copy name[j] to name[i]
                strcpy(name[j],temp);
            }
        }
    }
    printf("The names in ascending order are :\n"); // Print message indicating sorted names
    for(i=0;i<n;i++) // Loop to print each sorted name
    {
        printf("%s\n",name[i]); // Print the name
    }
}