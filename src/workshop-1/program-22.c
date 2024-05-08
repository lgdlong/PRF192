#include <stdio.h>

int main() {
    int n ; scanf("%d", &n);

    int count = 2 * n + 1;

    for (int i = 1; i <= count; i++) {
        if (count == 0) printf("%d", n);
        else printf("%d ", n);
        --n;
    }
    return 0;
}