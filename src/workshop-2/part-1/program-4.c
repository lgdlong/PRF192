#include <stdio.h>

void swap(double *a, double *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    double a, b;
    scanf("%lf%lf", &a, &b);

    printf("Before swapping: n1 = %lf, n2= %lf\n", a, b);

    swap(&a, &b);
    
    printf("After swapping: n1 = %lf, n2 = %lf", a, b);

    return 0;
}