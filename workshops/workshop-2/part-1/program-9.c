#include <stdio.h>
#include <stdbool.h>

long long timTongUoc(long long n) {
    long long res = 0;

    // Các ước của n không bao giờ vượt qua n/2
    for (long long i = 1; i <= n/2; i++) {
        if (n % i == 0)
            res += i;
    }
    return res;
}

bool PerfectNum(long long n) {
    if (timTongUoc(n) == n) return true;
    else return false;
}


int main() {
    long long first, last;
    printf("Input lowest search limit of perfect numbers: ");
    scanf("%lld", &first);

    printf("Input highest search limit of perfect numbers: ");
    scanf("%lld", &last);

    for (long long i = first; i <= last; i++) {
        if (PerfectNum(i))
            printf("%lld ", i);
    }


    return 0;
}

/*
Số hoàn hảo là số nguyên dương mà tổng các ước số dương thực sự của nó (trừ chính nó) bằng chính số đó.
Ví dụ, số 6 là số hoàn hảo vì các ước số dương thực sự của nó (1, 2, 3) cộng lại bằng 6.
*/