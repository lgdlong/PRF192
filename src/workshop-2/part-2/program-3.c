#include <stdio.h>
#include <math.h>
#include <stdbool.h>

void check(double r, double length) {
    if (r == length)
        printf("Point on the circle!\n");
    else if (r < length)
        printf("Point inside the circle!\n");
    else
        printf("Point outside the circle!\n");
}



int main() {
    printf("We have a circle with center (0,0)\n");
    double x, y;
    double r;
    printf("Enter position of x: "); scanf("%lf", &x);
    printf("Enter position of y: "); scanf("%lf", &y);
    printf("Enter r: "); scanf("%lf", &r);

    double length = sqrt(pow(x, 2) + pow(y, 2));

    check(r, length);

    return 0;
}

/*
Write a C program that will accept a point and a circle having the center is (0,0) then print out the relative position of this point with the circle.
*/