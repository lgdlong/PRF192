#include <stdio.h>

int checkTamGiac(double a, double b, double c) {
    if (a + b > c && a + c > b && b + c > a) {
        return 1;
    }
    else return 0;
}

int main() {
    double a, b, c;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);

    if (checkTamGiac(a, b, c)) printf("La 3 canh cua tam giac!");
    else printf("Khong la 3 canh cua tam giac!");

    return 0;
}