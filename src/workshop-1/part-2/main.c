#include <stdio.h>

double find_income_tax(long long taxFreeIncome, double *incomeTax) {
    int _5tr = 5000000;
    int _8tr = 8000000;
    int _10tr = 10000000;
    int _18tr = 18000000;

    if (taxFreeIncome <= 0)
        *incomeTax = 0;

    else if (taxFreeIncome <= _5tr) {
        // Ti = 3tr -> incometax = Ti * 5%
        *incomeTax = 0.05 * taxFreeIncome;
    }

    else if (taxFreeIncome <= _10tr) {
        // Ti= 8tr -> incometax = 5tr*5% + (Ti - 5tr)*10%
        *incomeTax = _5tr * 0.05 + (taxFreeIncome - _5tr) * 0.1;
    }

    else if (taxFreeIncome <= _18tr) {
        // Ti = 18tr -> incometax = 5tr*5% + 5tr*10% + (Ti - 10tr)*15%
        *incomeTax = _5tr * 0.05 + _5tr * 0.1 + (taxFreeIncome - _10tr) * 0.15;
    }

    else {
        // Ti = 19tr -> incometax = 5tr*5% + 5tr*10% + 8tr*15% + (Ti - 18tr)*20%
        *incomeTax =  _5tr * 0.05 + _5tr * 0.1 + _8tr * 0.15 + (taxFreeIncome - _18tr) * 0.2;
    }
}


int main() {
    long long taxFreeIncome = 280800000;
    double incomeTax;
    find_income_tax(taxFreeIncome, &incomeTax);

    printf("%llf", incomeTax);
    return 0;
}