#include <stdio.h>

int main() {
    int i = 1;
    do {
        if (i == 1) printf("%d ", 1);
        if (10 <= i && i <= 1000 && i % 10 == 0)
            printf("%d ", i);
        i++;
    } while (i <= 1000);
    return 0;
}