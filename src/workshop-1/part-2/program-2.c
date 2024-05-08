#include <stdio.h>

double find_income_tax(long long taxFreeIncome, double *incomeTax) {
    if (taxFreeIncome <= 0)
        *incomeTax = 0;
    else if (taxFreeIncome <= 5000000)
        *incomeTax = 5.0/100;
    else if (taxFreeIncome <= 10000000)
        *incomeTax = 10.0/100;
    else if (taxFreeIncome <= 18000000)
        *incomeTax = 18.0/100;
    else
        *incomeTax = 20.0/100;
}

int main() {
    int personalPendingAmount = 9000000; //Tiền nuôi bản thân
    int pendingForDependent = 3600000; //Tiền cấp dưỡng cho mỗi người trong gia đình

    long long income; //Thu nhập cơ bản
    scanf("%lld", &income);

    int dependentNumber; //Số lượng thành viên trong gia đình
    scanf("%d", &dependentNumber);

    //Thu nhập chịu thuế
    long long taxFreeIncome = 12 * (personalPendingAmount + dependentNumber * pendingForDependent);
    
    double incomeTax; //Thuế theo %
    find_income_tax(taxFreeIncome, &incomeTax); //Tính thuế 





    return 0;
}