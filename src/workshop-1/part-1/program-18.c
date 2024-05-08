#include <stdio.h>

int main() {
    long long n; scanf("%lld", &n);

    if (0 <= n && n <= 10){
        printf("The score is valid.");
    }
    else
        printf("The score is not valid.");
    return 0;
}