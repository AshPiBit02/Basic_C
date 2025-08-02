#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include <conio.h>

// Global variables
int dep, w_am, amount, count = 3;

// Function declarations
int menu();
int balance_check();
int deposit_money();
int withdraw_money();
int w_amt();
void read_amount();
void write_amount();

int main() {
    char pin[5]; // Adjusted size to include null terminator
    char p[5] = "2426"; // Assuming a 4-digit PIN + null character
    int i;

    // Read the initial amount from the file
    read_amount();

    while (count > 0) {
        printf("Enter your 4-digit PIN: ");
        for (i = 0; i < 4; i++) {
            pin[i] = getch();  
            printf("*");        
        }
        pin[4] = '\0';

        if (strcmp(pin, p) == 0) {
            printf("\n**********MBL************\n");
            time_t now;
            struct tm *local;
            time(&now);
            local = localtime(&now);
            int hours = local->tm_hour;
            if (hours < 12) {
                printf("Good Morning! \nAashish Chaudhary\n");
            } else {
                printf("Good Evening! \nAashish Chaudhary\n");
            }
            printf("Account number:197098XXXXXXXXXXXXXX\n");
            menu();
            break;
        } else {
            printf("\nInvalid PIN!\n");
            count--;
            if (count > 0) {
                printf("%d more attempt(s) left\n", count);
            } else {
                printf("Account temporarily blocked!\n");
                exit(0);
            }
        }
    }

    return 0;
}

int menu() {
    int opt;
    while (1) {
        printf("\nMenu Options:\n1. Balance Inquiry\n2. Deposit Money\n3. Withdraw Money\n4. Exit\n");
        printf("Choose your operation: ");
        scanf("%d", &opt);
        switch (opt) {
            case 1:
                balance_check();
                break;
            case 2:
                deposit_money();
                break;
            case 3:
                withdraw_money();
                break;
            case 4:
                write_amount(); // Save the amount to the file before exiting
                printf("Thank you for using the ATM. Goodbye!\n");
                return 0;
            default:
                printf("Invalid option. Please try again.\n");
        }
    }
}

int balance_check() {
    printf("Your current balance is Rs %d\n", amount);
    printf("-------------------------------------------------------------------\n");
    return 0;
}

int deposit_money() {
    printf("Enter the deposit amount: Rs ");
    scanf("%d", &dep);
    printf("<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<<\n");
    printf("Rs %d deposited successfully!\n", dep);
    amount += dep;
    return 0;
}

int withdraw_money() {
    int amt;
    printf("Amounts:\n1. 1000\t\t2. 2000\n3. 3000\t\t4. 5000\n5. 10000\t6. 15000\n");
    printf("Enter withdrawing amount: ");
    scanf("%d", &amt);
    switch (amt) {
        case 1:
            w_am = 1000;
            break;
        case 2:
            w_am = 2000;
            break;
        case 3:
            w_am = 3000;
            break;
        case 4:
            w_am = 5000;
            break;
        case 5:
            w_am = 10000;
            break;
        case 6:
            w_am = 15000;
            break;
        default:
            printf("Invalid amount. Please try again.\n");
            return 0;
    }
    w_amt();
    return 0;
}

int w_amt() {
    printf("\n>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
    if (amount < w_am) {
        printf("Insufficient Balance!\n");
    } else {
        amount -= w_am;
        printf("Rs %d withdrawn successfully!\n", w_am);
    }
    return 0;
}

void read_amount() {
    FILE *file = fopen("amount.txt", "r");
    if (file == NULL) {
        // If the file does not exist, initialize the amount to 50000
        amount = 50000;
    } else {
        fscanf(file, "%d", &amount);
        fclose(file);
    }
}

void write_amount() {
    FILE *file = fopen("amount.txt", "w");
    if (file != NULL) {
        fprintf(file, "%d", amount);
        fclose(file);
    } else {
        printf("Error saving the amount to the file.\n");
    }
}