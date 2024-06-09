#include <stdio.h>
#include <stdbool.h>

void check(long long n) {
    long long f0 = 1;
    long long f1 = 2;

    long long temp = 0;
    while (temp < n) {
        temp = f1;
        f1 = f1 + f0; 
        f0 = temp;
    }

    if (temp == n) printf("YES");
    else printf("NO");
    
}

int main() {
    long long n;
    scanf("%lld", &n);

    check(n);

    return 0;
}

/*
Problem	Write a C program that will accept a positive integer then print out whether it is an element of the Fibonacci sequence or not.
*/