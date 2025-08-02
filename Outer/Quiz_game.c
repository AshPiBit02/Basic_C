#include <stdio.h>
#include <ctype.h>

int main() {
    char questions[][100] = {
        "1. What is the correct syntax to declare a pointer in C?",
        "2. What is the size of int in a 32-bit system?",
        "3. Which header file is required for printf() and scanf() functions?",
        "4. What is the output of 5 / 2 in C?",
        "5. Which loop guarantees at least one execution?",
        "6. What is the purpose of sizeof operator?",
        "7. What will printf(\"%d\", 3 + 2 * 2); output?",
        "8. What does strcmp() function do?",
        "9. What will be the output of printf(\"%d\", 'A');?",
        "10. What is the value of x after x = 5 % 2;?",
        "11. How do you dynamically allocate memory in C?",
        "12. Which operator is used to access the value at an address stored in a pointer?",
        "13. How do you comment multiple lines in C?",
        "14. What is the return type of main() function in C?",
        "15. What is the index of the first element in an array in C?",
        "16. What is NULL in C?",
        "17. What will be the output of printf(\"%c\", 65);?",
        "18. What does fopen() function return on failure?",
        "19. Which of the following is not a valid C data type?",
        "20. What is the correct way to declare an array of 10 integers in C?"
    };

    char options[][40] = {
        "A. int ptr;", "B. int *ptr;", "C. ptr *int;", "D. pointer int ptr;",
        "A. 1 byte", "B. 2 bytes", "C. 4 bytes", "D. 8 bytes",
        "A. <stdio.h>", "B. <stdlib.h>", "C. <conio.h>", "D. <string.h>",
        "A. 2", "B. 2.5", "C. 3", "D. 5/2",
        "A. for loop", "B. while loop", "C. do-while loop", "D. None of the above",
        "A. To find memory size of a variable", "B. To allocate memory dynamically", "C. To compare values", "D. None of the above",
        "A. 10", "B. 7", "C. 6", "D. 5",
        "A. Compares two strings", "B. Copies a string", "C. Concatenates two strings", "D. Reverses a string",
        "A. A", "B. ASCII value of A", "C. Compilation error", "D. Undefined",
        "A. 2", "B. 2.5", "C. 1", "D. 0",
        "A. malloc()", "B. alloc()", "C. dynamic_alloc()", "D. mem_alloc()",
        "A. &", "B. *", "C. ->", "D. .",
        "A. //", "B. /* */", "C. #comment", "D. --",
        "A. void", "B. int", "C. char", "D. float",
        "A. 0", "B. 1", "C. -1", "D. 2",
        "A. 0", "B. A pointer with no value", "C. Both A and B", "D. A character",
        "A. 65", "B. A", "C. Compilation error", "D. Undefined",
        "A. NULL", "B. 0", "C. -1", "D. 1",
        "A. int", "B. float", "C. string", "D. char",
        "A. int arr[10];", "B. arr[10] int;", "C. array int arr[10];", "D. int arr10;"
    };

    char answers[] = {'B', 'C', 'A', 'A', 'C', 'A', 'D', 'A', 'B', 'C', 'A', 'B', 'B', 'B', 'B', 'C', 'B', 'C', 'C', 'A'};
    int numberOfQuestions = sizeof(questions) / sizeof(questions[0]);
    char guess;
    int score = 0;

    printf("Quiz Game\n");

    for (int i = 0; i < numberOfQuestions; i++) {
        printf("%s\n", questions[i]);
        for (int j = 0; j < 4; j++) {
            printf("%s\n", options[i * 4 + j]);
        }

        printf("Enter your answer (A/B/C/D): ");
        scanf(" %c", &guess);
        guess = toupper(guess);

        if (guess == answers[i]) {
            printf("Correct!\n");
            score++;
        } else {
            printf("Wrong! The correct answer is %c.\n", answers[i]);
        }
        printf("\n");
    }

    printf("Your final score is %d out of %d.\n", score, numberOfQuestions);

    return 0;
}
