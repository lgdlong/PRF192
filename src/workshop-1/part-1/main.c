#include <stdio.h>

int main() {
	int n;
	scanf("%d", &n);

	switch (n) {
	case 1:
	case 2:
		printf("YES");
		break;
	case 3: case 4:
		printf("NO");
		break;
	default:
		break;
	}

}