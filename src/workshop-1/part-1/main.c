#include <stdio.h>

int findMax(double a, double b, double c) {
	double max = a;
	if (b > max) {
		return b;
	}
	else if (c > max) {
		return c;
	}
	else {
		return max;
	}
}

int main() {
	double a, b, c;
	scanf("%lf", &a);
	scanf("%lf", &b);
	scanf("%lf", &c);

	double max = findMax(a, b, c);
	
	printf("MAX = %lf", max);
	return 0;
}