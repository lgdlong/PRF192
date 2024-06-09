#include <stdio.h>
#include <math.h>

int main() {    
    int a, b;
    scanf("%d", &a);
    scanf("%d", &b);

    long long res = pow(a, b);

    printf("%lld", res);

    return 0;
}