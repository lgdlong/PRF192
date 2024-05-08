#include <stdio.h>

int MOD = 1000000007;

long long giaiThua(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return (n * giaiThua(n-1)) % MOD;
}

int main() {
    int n; scanf("%d", &n);

    long long result = giaiThua(n);

    printf("%lld", result);

    return 0;
}