#include <stdio.h>

int main() {
    long long n; scanf("%lld", &n);

    if (10 <= n && n <= 100){
        printf("%lld is in range [10, 100]", n);
    }
    else
        printf("%lld is not in range [10, 100]", n);
    return 0;
}