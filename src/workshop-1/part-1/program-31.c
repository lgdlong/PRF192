#include <stdio.h>

int main() {
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    for (int i = a; i <= b; i++) {
        if (i % 3 == 0 && i % 5 == 0)
            printf("%d ", i);
    }
    return 0;
}