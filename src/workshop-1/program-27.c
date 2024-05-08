#include <stdio.h>

void print_divisors(int n) {
    // Ước số
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) printf("%d ", i);
    }
}

int main() {
    int n; scanf("%d", &n);

    print_divisors(n);

    return 0;
}