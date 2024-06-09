#include <stdio.h>

int main() {
    system("cls");  
    int n; scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0 && arr[i] > 0) sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}