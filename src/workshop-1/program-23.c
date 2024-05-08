#include <stdio.h>

long long sum(long long a, long long b) {
    long long sum_ = 0;
    for (long long i = a; i <= b; i++) {
        sum_ += i;
    }
    return sum_;
}

int main() {
    long long a, b;

    scanf("%lld", &a);
    scanf("%lld", &b);

    long long SUM = sum(a, b);

    printf("%lld", SUM);

    return 0;
}