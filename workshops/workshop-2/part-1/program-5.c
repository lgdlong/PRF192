#include <stdio.h>

int main() {
    printf("Enter n: ");
    long long n; scanf("%lld", &n);

    if (n % 2 == 0) {
        printf("The entered number is even.");
    }
    else {
        printf("The entered number is odd.");
    }
    return 0;
}