#include <stdio.h>

double factorial(int n) {
    double res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int n; scanf("%d", &n);
    printf("%.0lf", factorial(n));
    return 0;
}

/*
Write a C program that will accept a positive integer then print out its factorial.
*/