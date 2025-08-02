#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define loop0 for (i = 1; i <= n; i++)
#define loop1 for (i = 1; i <= m; i++)
#define loop2 for (j = 1; j <= n; j++)
#define loop3 for (i = 0; i < n; i++)

int fiboterm(int);
int fact(int);
int matrix();
int grt_array();
int sml_array();
int ascendingarray();
int descendingarray();
int swap();
int bit_AND();
int bit_OR();
int left_shift();
int right_shift();
int file_w();
int file_r();
int structure();
int pattern();
int sum_num();
int sum_sq_num();

void main() {
ini:
    printf("1.Fibonacci term\n2.Fibonacci series\n3.Factorial\n4.Matrix\n5.Greatest in array\n6.Smallest in array\n7.Sort array in ascending order\n8.Sort array in descending order\n9.Swapping two numbers\n10.Bitwise ANDing\n11.Bitwise ORing\n12.Left shift\n13.Right shift\n14.File in writing mode\n15.File in read mode\n16.Structure\n17.Pyramid\n18.Sum of series of Natural numbers\n19.Sum of square of natural numbers\n");
    int op;
    printf("----------------------------------------------------\n");
    printf("Choose your operation: ");
    scanf("%d", &op);
    switch (op) {
    case 1:
        int n;
        printf("Enter the term whose value is required: ");
        scanf("%d", &n);
        printf("The required fibonacci [%d] term is %d", n, fiboterm(n));
        break;
    case 2:
        int i;
        printf("Enter the required number of terms: ");
        scanf("%d", &n);
        printf("The required terms are: ");
        loop0 {
            printf("%d ", fiboterm(i));
        }
        break;
    case 3:
        printf("Enter the number whose factorial is to be determined: ");
        scanf("%d", &n);
        printf("The factorial of %d is %d", n, fact(n));
        break;
    case 4:
        matrix();
        break;
    case 5:
        grt_array();
        break;
    case 6:
        sml_array();
        break;
    case 7:
        ascendingarray();
        break;
    case 8:
        descendingarray();
        break;
    case 9:
        swap();
        break;
    case 10:
        bit_AND();
        break;
    case 11:
        bit_OR();
        break;
    case 12:
        left_shift();
        break;
    case 13:
        right_shift();
        break;
    case 14:
        file_w();
        break;
    case 15:
        file_r();
        break;
    case 16:
        structure();
        break;
    case 17:
        pattern();
        break;
    case 18:
        sum_num();
        break;
    case 19:
        sum_sq_num();
        break;
    default:
        printf("Invalid choice!");
    }
    int n;
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
    printf("\nEnter 1 to go to the initial stage.\nElse enter any key to exit\nInput: ");
    scanf("%d", &n);
    if (n == 1) {
        printf("*****************************************************\n");
        goto ini;
    } else {
        exit(0);
    }
}

int fiboterm(int n) {
    if (n == 1) {
        return 0;
    }
    if (n == 2) {
        return 1;
    } else
        return fiboterm(n - 1) + fiboterm(n - 2);
}

int fact(int n) {
    if (n < 0) {
        return 0;
    } else if (n == 0 || n == 1) {
        return 1;
    } else {
        return n * fact(n - 1);
    }
}

int matrix() {
    int i, j, m, n;
    printf("Enter the number of rows and columns of the matrix:\n");
    scanf("%d%d", &m, &n);
    int matrix[m][n];
    printf("Enter matrix[%d][%d]:\n", m, n);
    loop1 {
        loop2 {
            printf("Enter the element[%d][%d]:", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("The entered matrix is\n");
    loop1 {
        loop2 {
            printf("%d\t", matrix[i][j]);
        }
        printf("\n");
    }
}

int grt_array() {
    int n, i, gr;
    printf("Enter the number of integers in the array: ");
    scanf("%d", &n);
    int num[n];
    loop3 {
        printf("Enter the element[%d]:", i + 1);
        scanf("%d", &num[i]);
    }
    gr = num[0];
    loop3 {
        if (gr < num[i]) {
            gr = num[i];
        }
    }
    printf("The greatest element in the array is %d", gr);
}

int sml_array() {
    int n, i, sm;
    printf("Enter the number of integers in the array: ");
    scanf("%d", &n);
    int num[n];
    loop3 {
        printf("Enter the element[%d]:", i + 1);
        scanf("%d", &num[i]);
    }
    sm = num[0];
    loop3 {
        if (sm > num[i]) {
            sm = num[i];
        }
    }
    printf("The smallest element in the array is %d", sm);
}

int ascendingarray() {
    int i, j, n;
    printf("Enter the number of integers in the array: ");
    scanf("%d", &n);
    int num[n];
    loop3 {
        printf("Enter the element[%d]:", i + 1);
        scanf("%d", &num[i]);
    }
    printf("The entered array in ascending order is: ");
    loop3 {
        for (j = i + 1; j < n; j++) {
            if (num[i] > num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
        printf("%d ", num[i]);
    }
}

int descendingarray() {
    int i, j, n;
    printf("Enter the number of integers in the array: ");
    scanf("%d", &n);
    int num[n];
    loop3 {
        printf("Enter the element[%d]:", i + 1);
        scanf("%d", &num[i]);
    }
    printf("The entered array in descending order is: ");
    loop3 {
        for (j = i + 1; j < n; j++) {
            if (num[i] < num[j]) {
                int temp = num[i];
                num[i] = num[j];
                num[j] = temp;
            }
        }
        printf("%d ", num[i]);
    }
}

int swap() {
    int x, y;
    printf("Enter the value of x and y:\n");
    scanf("%d%d", &x, &y);
    printf("Before swapping x=%d and y=%d\n", x, y);
    x = x + y;
    y = x - y;
    x = x - y;
    printf("After swapping x=%d and y=%d", x, y);
}

int bit_AND() {
    int x, y;
    printf("Enter two decimal numbers:\n");
    scanf("%d%d", &x, &y);
    printf("The result obtained after ANDing %d and %d is %d", x, y, x & y);
}
int bit_OR() {
    int x, y;
    printf("Enter two decimal numbers:\n");
    scanf("%d%d", &x, &y);
    printf("The result obtained after ORing %d and %d is %d", x, y, x | y);
}

int left_shift() {
    int x, y;
    printf("Enter a decimal number: ");
    scanf("%d", &x);
    printf("Enter the shift value: ");
    scanf("%d", &y);
    printf("After left shifting of %d by %d bit the result is %d\n", x, y, x << y);
}

int right_shift() {
    int x, y;
    printf("Enter a decimal number: ");
    scanf("%d", &x);
    printf("Enter the shift value: ");
    scanf("%d", &y);
    printf("After right shifting of %d by %d bit the result is %d\n", x, y, x >> y);
}

int file_w() {
    FILE *x;
    x = fopen("data.txt", "w");
    if (x == NULL) {
        printf("File doesn't exist!");
        exit(1);
    }
    char name[200];
    char address[999];
    char gender[44];
    float salary;
    int n;
    fprintf(x, "\nName\tAddress\tGender\tSalary");
    do {
        printf("Enter name, address, gender and salary: ");
        scanf("%s %s %s %f", name, address, gender, &salary);
        fprintf(x, "\n%s\t%s\t%s\t%0.2f", name, address, gender, salary);
        printf("\nPress 1 to add more data else press any key: ");
        scanf("%d", &n);
    } while (n == 1);
    fclose(x);
}

int file_r() {
    char name[100];
    char address[999];
    char gender[44];
    float salary;
    FILE *x;
    x = fopen("data.txt", "r");
    if (x == NULL) {
        printf("File doesn't exist!");
        exit(1);
    }
    printf("\nName\tAddress\tGender\tSalary");
    while (fscanf(x, "%s %s %s %f", name, address, gender, &salary) != EOF) {
        if (salary > 25000) {
            printf("\n%s\t%s\t%s\t%0.2f", name, address, gender, salary);
        }
    }
    fclose(x);
}

int structure() {
    struct employee {
        char name[90];
        char address[90];
        char post[90];
        float salary;
    };
    int n, i;
    printf("Enter the number of employees: ");
    scanf("%d", &n);
    struct employee a[n];
    loop0 {
        printf("Enter name, address, post and salary of employee[%d]:\n", i);
        scanf("%s %s %s %f", a[i].name, a[i].address, a[i].post, &a[i].salary);
    }
    printf("\nName\tAddress\tPost\tSalary");
    loop0 {
        printf("\n%s\t%s\t%s\t%.2f", a[i].name, a[i].address, a[i].post, a[i].salary);
    }
}

int pattern() {
    int n, i, j;
    printf("The height of the pyramid: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 2 * n - 1; j++) {
            if (j >= n - (i - 1) && j <= n + (i - 1)) {
                printf("*");
            } else {
                printf(" "); // Print a space instead of an empty string
            }
        }
        printf("\n");
    }
}

int sum_num() {
    int i, n, sum = 0;
    printf("Enter the natural number up to which the addition is required: ");
    scanf("%d", &n);
    loop0 {
        sum += i;
    }
    printf("The sum of natural numbers up to %d is %d", n, sum);
}

int sum_sq_num() {
    int i, n, sum = 0;
    printf("Enter the natural number up to which the addition is required: ");
    scanf("%d", &n);
    loop0 {
        sum += pow(i, 2); // sum += i * i;
    }
    printf("The sum of squares of natural numbers up to %d is %d", n, sum);
}
