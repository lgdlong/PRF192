#include <stdio.h>

long long giaiThua(int n) {
    long long result = 1;

    if (n == 1) return 1;
    else {
        for (int i = 2; i <= n; i++) {
            result *= i;
        }
        return result;
    }
}

int main() {
    printf("Enter n: ");
    int n; scanf("%d", &n);

    double res = 0;

    for (int i = 1; i <= n; i++) {
        res += giaiThua(i)*1.0 / i;
    }
    printf("The sum of the series is %lf", res);

    return 0;
}