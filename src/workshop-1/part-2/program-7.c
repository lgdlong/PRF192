#include <stdio.h>

int main() {
    printf("The ASCII table from a to b!\n");
    int a, b;
    printf("Enter a: ");
    scanf("%d", &a);
    printf("Enter b: ");
    scanf("%d", &b);

    for (unsigned char i = a; i <= b; i++) {
        printf("%c: %d, %o, %X\n", i, (int)i, i, i);
        // if (i % 20 == 0) getchar();
    } 
    return 0;
}