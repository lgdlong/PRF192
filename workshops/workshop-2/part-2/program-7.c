#include <stdio.h>

long long sumDigit(long long n) {
    long long SUM = 0;
    while (n > 0) {
        SUM += n % 10;
        n /= 10;
    }
    return SUM;
}

int main() {
    long long n;

    do {
        printf("Enter number: ");
        scanf("%lld", &n);
        
        if (n >= 0) printf("Sum of digits: %lld\n", sumDigit(n));
        else printf("Do not enter negative number!");

    } while (n >= 0);

    return 0;
}

/*
Write a C program that will carry out some times. In each time, a nonnegative integer is accepted then print out the sum of its decimal digits.
The program will terminate when its value of accepted number is negative.
*/