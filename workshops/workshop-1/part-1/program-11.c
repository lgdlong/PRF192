#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    printf("Nhap a: ");
    int a; scanf("%d", &a);
    
    printf("Nhap b: ");
    int b; scanf("%d", &b);

    swap(&a, &b);

    printf("Sau khi swap.\n");
    printf("a = %d\n", a);
    printf("b = %d\n", b);

    return 0;
}