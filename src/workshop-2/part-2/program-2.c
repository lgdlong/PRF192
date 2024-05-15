#include <stdio.h>
#include <stdbool.h>

bool checkNamNhuan(int year) {
    return (year % 100 == 0 && year % 4 == 0);
}

bool checkDayValid(int year, int month, int day) {
    /*
    - Năm nhuận chia hết cho 4 và chia hết cho 1000 thì có 29 ngày vào tháng 2
    - Tháng 1, 3, 5, 7, 8, 10, 12 có 31 ngày
    - Tháng 4, 6, 9, 11 có 30 ngày
    - Tháng 2 có 28 ngày (29 ngày vào năm nhuận)
    */



    if (checkNamNhuan(year) && month == 2 && day > 29) {
        return false;      
    }

    if (month > 12) return false;
    else {
        
    }
    

    if  (month == 1 || month ) {

    }

}

int main() {
    int day, month, year;

    printf("Enter year: ");
    scanf("%d", &year);
    printf("Enter month: ");
    scanf("%d", &month);
    printf("Enter day: ");
    scanf("%d", &day);

    if (checkDayValid(year, month, day))
        printf("YES\n");
    else
        printf("NO\n");
    
    return 0;
}