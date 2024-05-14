#include <stdio.h>
#include <ctype.h>

int main() {
    char d = 'a' + 6;
    printf("%c", d);
    char str = toupper(d);
    printf("%c", str);

    return 0;
}