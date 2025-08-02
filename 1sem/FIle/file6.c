// WAP to open a file named "inventory.txt" and store item name, quantity, rate and amount print out the details with their amount.
#include <stdio.h>
#define loop for (i = 0; i < n; i++)
struct inven
{
    char name[50];
    int quantity, rate;
};
void main()
{
    int i, n;
    printf("Enter the number of items:");
    scanf("%d", &n);
    struct inven in[n];
    loop
    {
        printf("Enter the name,quantity and rate of item[%d]\n", i + 1);
        scanf("%s%d%d", &in[i].name, &in[i].quantity, &in[i].rate);
    }
    FILE *x;
    x = fopen("D:file\\inventory.txt", "w");
    // fprintf(x,"Item_name\t\tQuantity\t\tRate\t\tAmount\n");
    loop
    {
        fprintf(x, "%s\t\t\t%d\t\t\t%d\t\t%d\n", in[i].name, in[i].quantity, in[i].rate, in[i].quantity * in[i].rate);
    }
    fclose(x);
    int a[n];
    x = fopen("D:file\\inventory.txt", "r");
    printf("Item_name\t\tQuantity\t\tRate\t\tAmount\n");
    while (fscanf(x, "%s\t\t%d\t\t%d\t\t%d\n", &in[i].name, &in[i].quantity, &in[i].rate, &a[i]) != EOF)
    {
        printf("%s\t\t%d\t\t%d\t\t%d\n", in[i].name, in[i].quantity, in[i].rate, in[i].quantity * in[i].rate, a[i]);
    }
    fclose(x);
}