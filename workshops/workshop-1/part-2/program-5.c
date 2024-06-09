#include <stdio.h>
#include <string.h>
#include <ctype.h>

void check(char str[0], int *count_nguyen_am, int *count_phu_am,
int *count_khac) {
    int appeared[26] = {0}; // mảng để đếm kí tự đã xuất hiện trước đó chưa

    for (int i = 0; i < strlen(str); i++) {
        if (!isalpha(str[i])) {// check không phải chữ cái
            ++(*count_khac);
        }
        else { // nếu là chữ cái
            char c = tolower(str[i]);
            if (c == 'a' || c == 'u' || c == 'e' || c == 'o'|| c == 'i') {
                if (!appeared[c - 'a']) {
                    ++(*count_nguyen_am);
                    appeared[c - 'a'] = 1;
                }
                
            }
            else {
                if (!appeared[c - 'a']) {
                    ++(*count_phu_am);
                    appeared[c - 'a'] = 1;
                }
            }
        }
    }
}

int main() {
    char str[100];
    int count_nguyen_am = 0;
    int count_phu_am = 0;
    int count_khac = 0;


    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';

    check(str, &count_nguyen_am, &count_phu_am, &count_khac);

    printf("Nguyen am: %d\nPhu am: %d\nKhac: %d", count_nguyen_am, count_phu_am, count_khac);

    return 0;
}

/*
Nguyen am: u, e, o, a, i
Phu am: con lai
*/