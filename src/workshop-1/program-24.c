#include <stdio.h>

long long sum(long long n) {
    long long SUM = 0;
    for (long long i = 0; i <= n; i++) {
        if (i % 2 != 0) SUM += i;
    }

    return SUM;
}

int main() {
    long long n; scanf("%lld", &n);

    printf("%lld", sum(n));

    return 0;
}