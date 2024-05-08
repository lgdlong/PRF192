#include <stdio.h>

void input(int *a, char *c, int *b) {
    scanf("%d", a);
    scanf(" %c", c);
    scanf("%d", b);
}

int main() {
    int a, b;
    char c; // + - * /
    
    input(&a, &c, &b);

    switch (c) {
    case '+':
        printf("%d", a + b);
        break;
    case '-':
        printf("%d", a - b);
        break;
    case '*':
        printf("%d", a * b);
        break;
    case '/':
        printf("%f", (float)a / b);
        break;
    default:
        break;
    }

    return 0;
}