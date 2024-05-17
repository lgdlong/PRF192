#include <stdio.h>

void input(long long *a, long long *b) {
    scanf("%lld", a);
    scanf("%lld", b);

    while (*a <= 0 || *b <= 0) {
        printf("a and b must be positive integer! Pls enter again!\n");  
        scanf("%lld", a);
        scanf("%lld", b);
    }
}

long long gcd(long long a, long long b) {
    while (b != 0) {
        long long temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

long long lcm(long long a, long long b) {
    return (a * b / gcd(a, b));
}

int main() {
    long long a, b;
    input(&a, &b);


    printf("GCD: %lld\n", gcd(a, b));
    printf("LCM: %lld", lcm(a, b));

    return 0;
}

/*
Problem	Write a C program that will accept two positive integers then print out their greatest common divisor and least common multiple.

Tim uoc chung lon nhat (GCD) boi chung nho nhat (LCM)
*/