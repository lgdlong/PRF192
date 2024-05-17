#include <stdio.h>
#include <math.h>

int isPerfectSquare(long long n) {
    // Function to check if n is a perfect square
    long long sqrt_n = (long long)sqrt(n);
    return (sqrt_n * sqrt_n == n);
}

void checkFibo(long long n) {
    // Function to check if n is a Fibonacci number
    if (isPerfectSquare(5 * n * n + 4) || isPerfectSquare(5 * n * n - 4)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
}

int main() {
    long long n;
    printf("Enter a positive integer: ");
    scanf("%lld", &n);

    checkFibo(n);

    return 0;
}
