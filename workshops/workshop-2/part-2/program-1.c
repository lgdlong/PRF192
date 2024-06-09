#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkPrime(long long n) {
    if (n < 2) return false;
    for (long long i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

void printPrime(long long n) {
    for (long long i = 2; i <= n; i++) {
        if (checkPrime(i))
            printf("%lld ", i);
    }
}

int main() {
    long long n;
    printf("Enter n: ");
    scanf("%lld", &n);

    if (n < 2) {
        printf("n must be greater than 1!\n"); // kiểm soát n < 2
        return 0;
    }
    else printPrime(n);
    return 0;
}