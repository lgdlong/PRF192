#include <stdio.h>

int main() {
    int n;
    printf("Nhap n: ");
    scanf("%d", &n);
    // Check > 100
    while (n > 100) {
        printf("So nhap vao phai nho hon 100!\n");
        printf("Nhap n: ");
        scanf("%d", &n);
    }
    
    for (int i = n; i <= 100; i++) {
        if (i % 2 == 0) printf("%d ", i);
    }


    return 0;
}