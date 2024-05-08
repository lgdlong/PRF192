#include <stdio.h>

void swap(int *a, int *b) {
    *a = *a + *b; // a bằng tổng
    *b = *a - *b; // b gán bằng a
    *a = *a - *b; // a gán bằng b
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