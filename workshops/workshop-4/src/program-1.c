#include <stdio.h>

int main() {
    system("cls");
    int arr[10];

    for (int i = 0; i < 10; i++) {
        scanf("%d", &arr[i]);
    }

    long long sum = 0;
    for (int i = 0; i < 10; i++) {
        sum += arr[i];
    }

    printf("%lld", sum);
    return 0;
}