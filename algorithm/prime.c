#include <stdio.h>

// Function to check if a number is prime
int isPrime(int n) {
    // Handle special cases
    if (n <= 1) return 0;
    if (n <= 3) return 1;
    
    // Eliminate multiples of 2 and 3 early
    if (n % 2 == 0 || n % 3 == 0) return 0;
    
    // Check for factors up to the square root of n
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return 0;
    }
    
    return 1;
}

int main() {
    int number;
    
    // Input number from user
    printf("Enter a number: ");
    scanf("%d", &number);
    
    // Check and print if the number is prime
    if (isPrime(number))
        printf("%d is a prime number.\n", number);
    else
        printf("%d is not a prime number.\n", number);
    
    return 0;
}

