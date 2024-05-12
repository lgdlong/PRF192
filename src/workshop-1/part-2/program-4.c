#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp; 
}

void input(int *a, int *b) {
    do {
        printf("Nhap gia tri a: ");
        scanf("%d", a);

        printf("Nhap gia tri b: ");
        scanf("%d", b);

        if (*a == 0 || *b == 0){
            printf("\nGia tri cua a va b phai khac 0!\n");
            printf("Vui long nhap lai!\n\n");
            continue;
        }
        else {
            break;
        }
    } while (1);

    printf("Before swap: a = %d, b = %d\n", *a, *b);

    swap(a, b);

    printf("After swap: a = %d, b = %d\n", *a, *b);
}

int main() {
    int a, b;
    input(&a, &b);
    return 0;
}

/*
Nhập 2 số nguyên vào, 
*/