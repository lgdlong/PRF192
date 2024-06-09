#include <stdio.h>

double func(double *n) {
    /*
    Nhập vào số n cho đến khi thấy số 0 và tính tổng các số n đã nhập.
    */
    double SUM = 0;
    do {
        scanf("%lf", n);
        SUM += *n;
        // if ()
    } while (*n != 0);
    
    return SUM;
}

int main() {
    double n;
    double SUM = func(&n);
    printf("%lf", SUM);
    return 0;
}

/*
Write a C program that will print out sum of integers inputted from the keyboard until the value 0 is inputted.
*/