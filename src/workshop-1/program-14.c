#include <stdio.h>
int main() {
    long long n;
    printf("Enter n: ");
    scanf("%lld", &n);

    if (n == 0) {
        printf("n is equal to 0");
    }
    else if (n > 0){
        printf("n is a positive integer");
    }
    else
        printf("n is a negative integer");
    
    return 0;
}