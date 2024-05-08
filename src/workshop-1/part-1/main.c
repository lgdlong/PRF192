#include <stdio.h>

int sum(int a, int b) {
	return a + b;
	
}

int main() {
	printf("Hello!\n");
	int a = 10, b = 5;
	printf("Tong a + b = %d", sum(a, b));
	return 0;
}
