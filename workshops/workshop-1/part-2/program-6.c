#include <stdio.h>

int main() {
    for (unsigned char i = 1; i <= 225; i++) {
        printf("%c: %d, %o, %X\n", i, (int)i, i, i);
        // if (i % 20 == 0) getchar();
    } 
    return 0;
}