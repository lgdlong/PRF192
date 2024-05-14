#include <stdio.h>
#include <ctype.h>
#include <string.h>

void decimalToBinary(long long n) {
    char binary[65] = "";
    char eachBina[2]; // biến chưa giá trị kí tự 0,1 
    
    // Tính chuỗi binary
    while (n > 0) {
        int remainder = n % 2; // phần dư trong các phép chia 2, {0, 1}

        sprintf(eachBina, "%lld", remainder); // hàm chuyển số sang kí tự
        strcat(binary, eachBina);

        n /= 2; // n được chia cho 2 qua mỗi lần lặp
    }

    // Đảo ngược chuỗi sau khi chuyển đổi
    int len = strlen(binary);
    for (int i = 0; i < len/2; ++i) {
        char temp = binary[i];
        binary[i] = binary[len-i-1];
        binary[len-i-1] = temp;
    }

    printf("Binary: %s", binary);
}

int main() {
    long long n; scanf("%lld", &n);

    if (n == 0) printf("Binary: 0");
    else decimalToBinary(n);

    return 0;
}