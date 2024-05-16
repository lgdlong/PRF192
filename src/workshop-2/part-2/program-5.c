#include <stdio.h>

double fibo(int n) {
    double f0 = 1;
    double f1 = 2;

    if (n <= 0) return 0;
    if (n == 1) return 1;

    double temp;

    for (int i = 2; i <= n; i++) {
        // f3 = f2 + f1
        temp = f1;
        f1 = f1 + f0; 
        f0 = temp;
    }
    return temp;
}

int main() {
    int n; scanf("%d", &n);

    double res = fibo(n);

    printf("%.0lf", res);
    return 0;
}

/*
Fibonaci
Write a C program that will print out the value at the nth position in Fibonacci sequence.
*/