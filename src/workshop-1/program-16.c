#include <stdio.h>
#include <stdlib.h>

int findMax(int arr[0]) {
    int max = arr[0];

    for (int i = 1; i < 3; i++) {
        if (arr[i] > max)
            max = arr[i];
    }

    return max;
}

int main(){
    int arr[3];

    for (int i = 0; i < 3; i++) {
        scanf("%d", &arr[i]);
    }

    int max = findMax(arr);

    printf("%d", max);

    return 0;
}