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
int employeeNumbers = 3;

struct employee {
    int code; // mã
    char name[20]; // tên
    double salary; // lương
    double allowance; // phụ cấp
};

void inputChoice(int *choice);


// MAIN FUNCTIONS
void addEmployee(struct employee emp[]);
void findName(struct employee emp[]);
void removeEmployee(struct employee emp[]);
void sortEmployees(struct employee emp[]);
void displayEmployees(struct employee emp[]);

// MENU
void displayOptions();
void menu(struct employee emp[]);

void testcase(struct employee emp[]) {
    emp[0].code = 1;
    strcpy(emp[0].name, "Phung Luu Hoang Long");
    emp[0].salary = 10000;
    emp[0].allowance = 20000;

    emp[1].code = 2;
    strcpy(emp[1].name, "Tran Le Quynh");
    emp[1].salary = 5000000;
    emp[1].allowance = 5000;

    emp[2].code = 3;
    strcpy(emp[2].name, "Nguyen Thi My Duyen");
    emp[2].salary = 3000000;
    emp[2].allowance = 300000;
}

int main() {
    system("cls");

    struct employee emp[100];

    testcase(emp);

    menu(emp);

    return 0;
}

void inputChoice(int *choice){
    printf("Enter your choice: ");
    scanf("%d", choice); getchar();
}

void printEmployee(struct employee emp[], int i) {
    printf("%d | %s | %.2f | %.2f | %.2f\n", emp[i].code, emp[i].name, emp[i].salary, emp[i].allowance, emp[i].salary + emp[i].allowance);
}

void displayOptions() {
    printf("\n----------------------- MENU -----------------------\n");
    printf("1. Add a new employee\n");
    printf("2. Find data about employees using a name inputted.\n");
    printf("3. Remove an employee based on a code inputted\n");
    printf("4. Print the list in descending order based on salary + allowance\n");
    printf("5. Quit\n");
    printf("6. Print employee list\n");
}

void addEmployee(struct employee emp[]) {
    printf("Enter code: ");
    scanf("%d", &emp[employeeNumbers].code);

    printf("Enter name: ");
    getchar();
    fgets(emp[employeeNumbers].name, sizeof(emp[employeeNumbers].name), stdin);
    emp[employeeNumbers].name[strcspn(emp[employeeNumbers].name, "\n")] = '\0';

    printf("Enter salary: ");
    scanf("%lf", &emp[employeeNumbers].salary);

    printf("Enter allowance: ");
    scanf("%lf", &emp[employeeNumbers].allowance);

    employeeNumbers++;
}

void findName(struct employee emp[]) {
    char name[20];
    printf("Enter name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    for (int i = 0; i < employeeNumbers; i++) {
        if (strcmp(emp[i].name, name) == 0) {
            printEmployee(emp, i);
        }
    }
}

void removeEmployee(struct employee emp[]) {
    int removedCode;
    printf("Enter the employee code to remove: ");
    scanf("%d", &removedCode);
    
    for (int i = 0; i < employeeNumbers; i++) {
        if (removedCode == emp[i].code) {
            for (int j = i; j < employeeNumbers - 1; j++) {
                emp[j] = emp[j + 1];
            }
            employeeNumbers--;
            break;
        }
    }
    printf("Employee removed successfully!\n");
}

int cmp(const void *a, const void *b) {
    return (((struct employee *)b)->salary + ((struct employee *)b)->allowance) - (((struct employee *)a)->salary + ((struct employee *)a)->allowance);
}

void sortEmployees(struct employee emp[]) {
    struct employee newArr[100];

    // Copy array
    for (int i = 0; i < employeeNumbers; i++) {
        newArr[i] = emp[i];
    }

    // Sort
    qsort(newArr, employeeNumbers, sizeof(struct employee), cmp);

    // Print
    for (int i = 0; i < employeeNumbers; i++) {
        printEmployee(newArr, i);
    }
}

void displayEmployees(struct employee emp[]) {
    printf("\nEmployees list: \n\n");
    printf("Code | Name | Salary | Allowance | Total | Salary\n");
    for (int i = 0; i < employeeNumbers; i++) {
        printEmployee(emp, i);
    }
}

void menu(struct employee emp[]) {
    int choice;
    do {
        displayOptions();
        inputChoice(&choice);
        switch (choice) {
            case 1:
                addEmployee(emp);
                break;
            case 2:
                findName(emp);
                break;
            case 3:
                removeEmployee(emp);
                break;
            case 4:
                sortEmployees(emp);
                break;
            case 5:
                break;
            case 6:
                displayEmployees(emp);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 5);
}
