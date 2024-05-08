#include <stdio.h>

void printOddNums(long long a, long long b) {
    for (long long i = a; i <= b; i++) {
        if (i % 3 == 0) printf("%d ", i);
    }
}

int main() {
    long long a, b;
    scanf("%lld", &a);
    scanf("%lld", &b);

    printOddNums(a, b);

    return 0;
}