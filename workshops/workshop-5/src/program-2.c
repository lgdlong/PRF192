#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/*
•	Data about an employee: Code(char 8), name (char 20), salary(double), allowance(double)
•	Develop a C-program that allows user:
–	Adding a new employee
–	Find data about employees using a name inputted.
–	Remove an employee based on a code inputted
–	Print the list in descending order based on salary + allowance.

( Helps for this problem are introduced in the lecture’s slide)
*/

struct employee {
    int code; // mã
    char name[20]; // tên
    double salary; // lương
    double allowance; // phụ cấp
};

void inputChoice(int *choice){
    printf("Enter your choice: ");
    scanf("%d", choice);
}

void displayOptions() {
    printf("----------------------- MENU -----------------------\n");
    printf("1. Add a new employee\n");
    printf("2. Find data about employees using a name inputted.\n");
    printf("3. Remove an employee based on a code inputted\n");
    printf("4. Print the list in descending order based on salary + allowance\n");
    printf("5. Quit\n");
}

void menu(struct employee emp[100]) {
    int choice;
    do {
        displayOptions();
        inputChoice(&choice);
        switch (choice) {
            case 1:
                printf("%d, %s, %f, %f\n", emp[0].code, emp[0].name, emp[0].salary, emp[0].allowance);
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 5);
}

int main() {
    system("cls");

    struct employee emp[100];

    // Add first employee
    emp[0].code = 0;
    strcpy(emp[0].name, "Phung Long");
    emp[0].salary = 1000000;
    emp[0].allowance = 20000;

    menu(emp);

    return 0;
}