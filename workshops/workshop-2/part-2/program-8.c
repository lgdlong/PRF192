#include <stdio.h>
#include <math.h>

int numOfDigit(long long n  ) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

void input(long long *integralPart, double *fraction) {    
    printf("Nhap phan nguyen: ");
    scanf("%lld", integralPart);

    printf("Nhap phan thap phan: ");
    scanf("%lf", fraction);
    
    while (*integralPart < 0 || *fraction < 0) {
        printf("\nGia tri nhap vao phai lon hon 0! Vui long nhap lai!\n\n");
        printf("Nhap phan nguyen: ");
        scanf("%lld", integralPart);

        printf("Nhap phan thap phan: ");
        scanf("%lf", fraction);
    }
}

double printHEHE(long long integralPart, double fraction) {
    double result;
    double rielFraction;
    if (fraction >= 1) {
        // fraction = 23, 324, 324,...
        rielFraction = fraction*1.0 / pow(10, numOfDigit(fraction));

        result = integralPart + rielFraction;
    }

    else { // 0 < fraction < 1
        // fraction = 0.12, 0.32,...
        result = integralPart*1.0 + fraction;
    }
    return result;
}

int main() {
    printf("Nhap vao mot so thuc!\n");
    long long integralPart; // Phan nguyen
    double fraction; // Phan thap phan

    input(&integralPart, &fraction);

    printf("Real number: %lf", printHEHE(integralPart, fraction));

    return 0;
}

/*
Input: 32 25
Output: 32.25

Input: 32 0.25
Output: 32.25

Problem	Write a C program that will accept the integral part and fraction of a real number then print out the this real number.
*/