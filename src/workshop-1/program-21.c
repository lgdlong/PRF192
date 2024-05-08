#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    for (int i = a; i <= b; i++) {
        if (i != b) printf("%d ", i);
        else printf("%d", i);
    }

    return 0;
}