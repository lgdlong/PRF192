#include <stdio.h>

int main() {
    system("cls");
    int n; scanf("%d", &n);

    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++) {
        if (0 <= arr[i] && arr[i] <= 10)
            printf("%d ", arr[i]);
    }
    return 0;
}