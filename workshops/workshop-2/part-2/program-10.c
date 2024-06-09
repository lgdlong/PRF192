#include <stdio.h>

int countDigits(long long n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

void tachSo(long long n, int arr[]) {
    int i = 0;
    while (n != 0) {
        int digit = n % 10; // Tách chữ số
        arr[i] = digit; // Thêm chữ số vào mảng
        ++i;
        n /= 10;
    }
}

int min(int arr[], int length) {
    int MIN = arr[0];
    for (int i = 1; i < length; i++) {
        if (arr[i] <= MIN)
            MIN = arr[i];
    }
    return MIN;
}

int max(int arr[], int length) {
    int MAX = arr[0];
    int MIN = min(arr, length);
    for (int i = 1; i < length; i++) {
        if (arr[i] == MIN) continue;
        if (arr[i] >= MAX)
            MAX = arr[i];
    }
    return MAX;
}

void func(long long n, int arr[], int length) {
    tachSo(n, arr); // Tách chữ số của n đưa vào mảng arr

    printf("Min digit: %d\n", min(arr, length));
    printf("Max digit: %d", max(arr, length));
}

int main() {
    long long n;
    scanf("%lld",  &n);

    int length = countDigits(n); // Đếm số lượng chữ số của n

    int arr[length]; // mảng lưu các chữ số 0 -> 9 có kích thước là length+1

    func(n, arr, length);

    return 0;
}

/*
Write a C program that will accept a non-negative integer then print out its minimum and maximum digits.

Input: Số không âm
Output: Chữ số nhỏ nhất và lớn nhất
*/