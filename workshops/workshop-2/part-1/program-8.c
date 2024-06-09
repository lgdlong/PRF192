#include <stdio.h>
#include <stdbool.h>
#include <math.h>

bool checkPrime(long long n) {
    if (n < 2) return false;
    for (int i = 2; i <= sqrt(n); i++) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    long long n; scanf("%lld", &n);

    if (checkPrime(n)) printf("The number %lld is a prime number.", n);
    else printf("The number %lld is not a prime number.", n);

    return 0;   
}