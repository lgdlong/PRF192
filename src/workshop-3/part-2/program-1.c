#include <stdio.h>
#include <stdbool.h>
#include <math.h>

// Function prototype
void menu();
void input(int *choice);
bool checkPrime(int n);
void processPrimes();
void printMinMaxDigit();
void mainMenu();

int main() {
    mainMenu();
    return 0;
}

// Function definition
void menu() {
    printf("---- Menu -----\n");
    printf("1. Process primes\n");
    printf("2. Print min, max digit in an integer\n");
    printf("3. Quit\n");
}

void input(int *choice) {
    printf("\nEnter your choice: ");
    scanf("%d", choice);
}

bool checkPrime(int n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void processPrimes() {
    printf("1. Process primes\n");
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);
    if (checkPrime(n)) printf("\n%d is prime\n\n", n);
    else printf("\n%d is not prime\n\n", n);
}

void printMinMaxDigit() {
    printf("2. Print min, max digit in an integer\n");
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    int MAX = n % 10; // first digit
    int MIN = n % 10; // first digit

    while (n != 0) {
        int temp = n % 10;
        if (temp >= MAX) MAX = temp;
        if (temp <= MIN) MIN = temp;
        n /= 10;
    }
    printf("The min digit is %d, and the max digit is %d\n\n", MIN, MAX);
}

void mainMenu() {
    int choice;
    do {
        menu();
        input(&choice);
        switch (choice) {
        case 1:
            processPrimes();
            break;
        
        case 2:
            printMinMaxDigit();
            break;

        case 3:
            return;

        default:
            break;
        }
    } while (choice != 3);
}


/*
Problem	Write a C program that will execute repetitively using a simple menu as following: 

1-	Process primes
2-	Print min, max digit in an integer;
3-	Quit
Select an operation:

1-	When user selects the option 1, the program will accept a positive integral number and print out a message about whether the input number  is a prime or not.
2-	When user selects the option 2, the program will accept a positive integral number and print out the minimum and maximum digit in this number.
3-	The program will terminate when user selects the option 3.
*/