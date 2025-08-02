#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 20
#define MAX_NAME_LENGTH 50

// Structure to store student information
struct Student {
    char name[MAX_NAME_LENGTH];
    int marks;
};

// Function to swap two student structures
void swap(struct Student *a, struct Student *b) {
    struct Student temp = *a;
    *a = *b;
    *b = temp;
}

// Function to perform bubble sort on the array of students
void bubbleSort(struct Student students[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (students[j].marks < students[j + 1].marks) {
                swap(&students[j], &students[j + 1]);
            }
        }
    }
}

int main() {
    struct Student students[MAX_STUDENTS];
    int n;

    printf("Enter the number of students (max 20): ");
    scanf("%d", &n);

    if (n > MAX_STUDENTS || n <= 0) {
        printf("Invalid number of students.\n");
        return 1;
    }

    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter name of student %d: ", i + 1);
        scanf("%s", students[i].name);
        printf("Enter marks of student %d: ", i + 1);
        scanf("%d", &students[i].marks);
    }

    // Sort students based on marks
    bubbleSort(students, n);

    // Display sorted student details
    printf("\nSorted Student List (Descending order of marks):\n");
    printf("-------------------------------------------------\n");
    printf("Name\t\tMarks\n");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < n; i++) {
        printf("%-20s %d\n", students[i].name, students[i].marks);
    }

    return 0;
}