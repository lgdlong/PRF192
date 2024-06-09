#include <stdio.h>

int checkOperator(char c) {
    if (c != '+' && c != '-' && c != '*' && c != '/') // Nếu operator khác +, -, *, /
        return 0;
}

void input(double *num1, double *num2, char *operator) {
    scanf("%lf%c%lf", num1, operator, num2);

    while (checkOperator(*operator) == 0) {
        printf("Sai dinh dang! Vui long nhap lai!\n");

        scanf("%lf%c%lf", num1, operator, num2);
    } 
}

void func(double num1, double num2, char operator) {
    switch (operator) {
        case '+':
            printf("%lf", num1 + num2);
            break;
        case '-':
            printf("%lf", num1 - num2);
            break;
        case '*':
            printf("%lf", num1 * num2);
            break;
        case '/':
            if (num2 == 0){
                printf("Devide by 0! Enter again!\n");
                input(&num1, &num2, &operator);
                func(num1, num2, operator);
                break;
            }
            else {
                printf("%lf", num1 / num2);
                break;
            }
        
        default:
            break;
    }
}

int main() {
    double num1, num2;
    char operator;

    input(&num1, &num2, &operator);
    func(num1, num2, operator);

    return 0;
}


/*
Write a program that allows user inputting a simple expression containing one of four operators +, -, *, / then the result is printed out to the monitor.
Input format:  num1 operator num2,
An example of user interface
Enter an expression (+ - * /): 4*5 
Result: 20

Iput: 3*5
Output: 15

*/