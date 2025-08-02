// #include <stdio.h>
// #include <time.h>

// int main() {
//     time_t currentTime;
//     time(&currentTime);

//     printf("Current Time: %s", ctime(&currentTime));
//     return 0;
// }
// // #include <stdio.h>
// // #include <time.h>

// // int main() {
// //     time_t now;
// //     struct tm *local;

// //     // Get the current time
// //     time(&now);

// //     // Convert to local time format
// //     local = localtime(&now);

// //     // Get hours, minutes, and seconds
// //     int hours = local->tm_hour;
// //     int minutes = local->tm_min;
// //     int seconds = local->tm_sec;

// //     // Display the current time
// //     printf("Current Time: %02d:%02d:%02d\n", hours, minutes, seconds);

// //     return 0;
// // }
#include <stdio.h>
#include <string.h>

#define MAX_BOOKS 100

// Book structure
struct Book {
    int id;
    char title[100];
    char author[100];
    int quantity;
};

// Array to store books
struct Book library[MAX_BOOKS];
int bookCount = 0;

// Function to add a new book
void addBook() {
    if (bookCount >= MAX_BOOKS) {
        printf("Library is full! Cannot add more books.\n");
        return;
    }
    
    printf("Enter Book ID: ");
    scanf("%d", &library[bookCount].id);
    getchar();  // Clear the input buffer

    printf("Enter Book Title: ");
    fgets(library[bookCount].title, 100, stdin);
    library[bookCount].title[strcspn(library[bookCount].title, "\n")] = '\0';  // Remove newline

    printf("Enter Author's Name: ");
    fgets(library[bookCount].author, 100, stdin);
    library[bookCount].author[strcspn(library[bookCount].author, "\n")] = '\0';  // Remove newline

    printf("Enter Quantity: ");
    scanf("%d", &library[bookCount].quantity);

    bookCount++;
    printf("Book added successfully!\n");
}

// Function to display all books
void displayBooks() {
    if (bookCount == 0) {
        printf("No books in the library.\n");
        return;
    }
    
    printf("\n--- List of Books ---\n");
    for (int i = 0; i < bookCount; i++) {
        printf("ID: %d\n", library[i].id);
        printf("Title: %s\n", library[i].title);
        printf("Author: %s\n", library[i].author);
        printf("Quantity: %d\n", library[i].quantity);
        printf("----------------------\n");
    }
}

// Function to search for a book by ID
void searchBook() {
    int id;
    printf("Enter Book ID to search: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            printf("Book Found!\n");
            printf("ID: %d\n", library[i].id);
            printf("Title: %s\n", library[i].title);
            printf("Author: %s\n", library[i].author);
            printf("Quantity: %d\n", library[i].quantity);
            return;
        }
    }
    printf("Book not found with ID: %d\n", id);
}

// Function to delete a book by ID
void deleteBook() {
    int id;
    printf("Enter Book ID to delete: ");
    scanf("%d", &id);

    for (int i = 0; i < bookCount; i++) {
        if (library[i].id == id) {
            for (int j = i; j < bookCount - 1; j++) {
                library[j] = library[j + 1];  // Shift books to the left
            }
            bookCount--;
            printf("Book deleted successfully!\n");
            return;
        }
    }
    printf("Book not found with ID: %d\n", id);
}

// Main function
int main() {
    int choice;

    while (1) {
        printf("\n--- Library Management System ---\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Delete Book by ID\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                addBook();
                break;
            case 2:
                displayBooks();
                break;
            case 3:
                searchBook();
                break;
            case 4:
                deleteBook();
                break;
            case 5:
                printf("Exiting the program...\n");
                return 0;
            default:
                printf("Invalid choice! Please try again.\n");
        }
    }
}
