#include <stdio.h>

int main() {
    long long n; 
    printf("Enter n: ");
    scanf("%lld", &n);

    if (n % 2 == 0){
        printf("n is even number");
    }
    else
        printf("n is odd number");
    return 0;
}