#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>
#include <ctype.h>

/*
Write a C-program that helps user managing a list of 100  student names using the following menu:
1- Add a student
2- Remove a student
3- Search a student
4- Print the list in ascending order
5- Quit

Names stored in UPPERCASE, all extra blanks in a name will be removed by code
*/

int studentNumbers = 0;

// OTHER FUNCTIONS
int cmp(const void *a, const void *b);
void inputChoice(int *choice);
void removeSpace(char name[]);
void uppcaseName(char name[]);

// MENU FUNCTIONS
void addStudent(char studentnames[][100]);
void removeStudent(char studentnames[][100]);
void searchStudent(char studentnames[][100]);
void sortStudent(char studentnames[][100]);
void displayStudents(char studentnames[][100]);

// MENU
void displayOptions();
void menu(char studentnames[][100]);


int main() {
    system("cls");
    char studentnames[100][100];
    menu(studentnames);
    return 0;
}

// ------------ WIRTE FUNCTIONS HERE! ------------

//SUP-FUNCTIONS
int cmp(const void *a, const void *b) {
    return strcmp((const char *)a, (const char *)b);
}

void inputChoice(int *choice) {
    printf("\n\nEnter your choice: ");
    scanf("%d", choice); getchar();
}

void removeSpace(char name[]) {
    int i = 0, j = 0;
    while (name[i] != '\0') {
        if (name[i] != ' ') {
            name[j] = name[i];
            j++;
        }
        i++;
    }
    name[j] = '\0';
}

void uppcaseName(char name[]) {
    int i = 0;
    while (name[i] != '\0') {
        name[i] = toupper(name[i]);
        i++;
    }
}

// MAIN FUCTIONS
void addStudent(char studentnames[][100]) {
    char name[100];

    printf("\nAdd a student name: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    removeSpace(name);

    uppcaseName(name);

    strcpy(studentnames[studentNumbers], name);
    studentNumbers++;
}

void removeStudent(char studentnames[][100]) {
    displayStudents(studentnames);
    
    char name[100];

    printf("Enter student name will remove: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    removeSpace(&name);
    uppcaseName(&name);

    for (char i = 0; i < studentNumbers; i++) {
        if (strcmp(studentnames[i], name) == 0) {
            for (int j = i; j < studentNumbers - 1; j++) {
                strcpy(studentnames[j], studentnames[j + 1]);
            }
            studentNumbers--;
            printf("\nStudent removed successfully!\n\n");
            return;
        }
    }
    printf("\nStudent not found!\n");
}

void searchStudent(char studentnames[][100]) {
    displayStudents(studentnames);
    
    char name[100];

    printf("\nEnter student name will remove: ");
    fgets(name, sizeof(name), stdin);
    name[strcspn(name, "\n")] = '\0';

    removeSpace(&name);
    uppcaseName(&name);

    for (int i = 0; i < studentNumbers; i++) {
        if (strcmp(studentnames[i], name) == 0) {
            printf("\nStudent found: %s\n", studentnames[i]);
            return;
        }
    }
    printf("\nStudent not found!\n");
}

void sortStudent(char studentnames[][100]) {
    if (studentNumbers == 0) {
        printf("\nNo students to display!\n");
        return;
    } else {
        char newArr[100][100];

        for (int i = 0; i < studentNumbers; i++) {
            strcpy(newArr[i], studentnames[i]);
        }

        qsort(newArr, studentNumbers, 100, cmp);

        displayStudents(newArr);
    } 
}

void displayStudents(char studentnames[][100]) {
    printf("\nStudent list: \n");
    for (int i = 0; i < studentNumbers; i++) {
        printf("%s\n", studentnames[i]);
    }
}

// MENU
void displayOptions() {
    printf("\n-----------------Menu------------------");
    printf("\n1. Add a student");
    printf("\n2. Remove a student");
    printf("\n3. Search a student");
    printf("\n4. Print the list in ascending order");
    printf("\n5. Quit");
    printf("\n6. Print student list");
}
void menu(char studentnames[][100]) {
    int choice;
    do {
        displayOptions();
        inputChoice(&choice);
        // Menu
        switch (choice) {
            case 1:
                addStudent(studentnames);
                break;
            case 2:
                removeStudent(studentnames);
                break;
            case 3:
                searchStudent(studentnames);
                break;
            case 4:
                sortStudent(studentnames);
                break;
            case 5:
                break;
            case 6:
                displayStudents(studentnames);
                break;
            default:
                printf("Invalid choice. Please try again.\n");
                break;
        }
    } while (choice != 5);
}



