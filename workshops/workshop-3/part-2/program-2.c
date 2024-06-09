#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function prototype
void menu();
void input(int *choice);
void Fibonacci();
void checkDay();
void mainMenu();

int main() {
    mainMenu();
    return 0;
}

// Function definition
void menu() {
    printf("\n---- Menu -----\n");
    printf("1. Fibonacci\n");
    printf("2. Check a day\n");
    printf("3. Quit\n");
}

void input(int *choice) {
    printf("\nEnter your choice: ");
    scanf("%d", choice);
}

void Fibonacci() {
    printf("1. Fibonacci\n");
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
    printf("\n");
}

void checkDay() {
    printf("2. Check a day\n\n");
    int month, day, year;
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter day: ");
    scanf("%d", &day);
    printf("Enter year: ");
    scanf("%d", &year);
    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12) {
        if (day >= 1 && day <= 31) {
            printf("Date is valid\n");
        } else {
            printf("Date is invalid\n");
        }
    } else if (month == 4 || month == 6 || month == 9 || month == 11) {
        if (day >= 1 && day <= 30) {
            printf("Date is valid\n");
        } else {
            printf("Date is invalid\n");
        }
    } else if (month == 2) {
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) {
            if (day >= 1 && day <= 29) {
                printf("Date is valid\n");
            } else {
                printf("Date is invalid\n");
            }
        } else {
            if (day >= 1 && day <= 28) {
                printf("Date is valid\n");
            } else {
                printf("Date is invalid\n");
            }
        }
    } else {
        printf("Date is invalid\n");
    }
    printf("\n");
}

void mainMenu() {
    int choice;
    do {
        menu();
        input(&choice);
        switch (choice) {
        case 1:
            Fibonacci();
            break;
        
        case 2:
            checkDay();
            break;

        case 3:
            return;

        default:
            break;
        }
    } while (choice != 3);
}


/*
Write a C program that will execute repetitively using a simple menu as following: 

1-Fibonacci sequence
2-Check a date
3-Quit
Choose an operation:

1- When the option 1 is selected, the program will accept a positive integral number, called as n, then the first n Fibonacci numbers will be printed out
2- When the option 2 is selected, the program will accept a date then the program will tell that whether this data is valid or not.
3- If the option 3 is selected, the program quits
*/