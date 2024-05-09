#include <stdio.h>

void find_income_tax(long long taxableIncome, double *incomeTax) {
    int _5tr = 5000000;
    int _8tr = 8000000;
    int _10tr = 10000000;
    int _18tr = 18000000;

    if (taxableIncome <= 0)
        *incomeTax = 0;

    else if (taxableIncome <= _5tr) {
        // Ti = 3tr -> incometax = Ti * 5%
        *incomeTax = 0.05 * taxableIncome;
    }

    else if (taxableIncome <= _10tr) {
        // Ti= 8tr -> incometax = 5tr*5% + (Ti - 5tr)*10%
        *incomeTax = _5tr * 0.05 + (taxableIncome - _5tr) * 0.1;
    }

    else if (taxableIncome <= _18tr) {
        // Ti = 18tr -> incometax = 5tr*5% + 5tr*10% + (Ti - 10tr)*15%
        *incomeTax = _5tr * 0.05 + _5tr * 0.1 + (taxableIncome - _10tr) * 0.15;
    }

    else {
        // Ti = 19tr -> incometax = 5tr*5% + 5tr*10% + 8tr*15% + (Ti - 18tr)*20%
        *incomeTax =  _5tr * 0.05 + _5tr * 0.1 + _8tr * 0.15 + (taxableIncome - _18tr) * 0.2;
    }
}

int main() {
    int personalPendingAmount = 9000000; //Tiền nuôi bản thân
    int pendingForDependent = 3600000; //Tiền cấp dưỡng cho mỗi người trong gia đình

    long long income; //Thu nhập cơ bản
    printf("Your income of this year: ");
    scanf("%lld", &income);

    int dependentNumber; //Số lượng thành viên trong gia đình
    printf("Number of dependent: ");
    scanf("%d", &dependentNumber);

    //Thu nhập không chịu thuế trong một năm
    long long taxFreeIncome = 12 * (personalPendingAmount + dependentNumber * pendingForDependent);
    printf("Tax-free income: %lld\n", taxFreeIncome);

    //Thu nhập bị tính thuế
    long long taxableIncome = income - taxFreeIncome;
    if (taxableIncome <= 0)  {
        printf("Taxable income: 0\n");
        taxableIncome = 0;
    }
    else printf("Taxable income: %lld\n", taxableIncome);


    double incomeTax; //Thuế (Số tiền phải trả cho nhà nước)
    find_income_tax(taxableIncome, &incomeTax); //Tính thuế 
    printf("Income tax: %lld", (long long)incomeTax);

    return 0;
}

/*
Tính incometax sẽ chia thành các mốc
1: 5tr
2: 5tr
3: 8tr
4: > 

*/