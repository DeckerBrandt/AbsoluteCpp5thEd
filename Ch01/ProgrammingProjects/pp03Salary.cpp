// page 42
#include <iostream>
using namespace std;

int main()
{
    int currentSalary;
    float newSalaryMonth;
    float newSalaryYear;
    float retroPay;

    const float PAY_INCREASE = 0.076;

    cout << "Input current salary.\n";
    cin >> currentSalary;

    newSalaryMonth = (currentSalary * PAY_INCREASE) + currentSalary;
    newSalaryYear = newSalaryMonth * 12;
    retroPay = currentSalary * PAY_INCREASE;

    cout << "Your adjusted monthly salary is $" << newSalaryMonth << ". Your adjusted yearly salary is $" << newSalaryYear << ". Your retroactive pay increase is $" << retroPay << endl;

    
    return 0;
}

/*
***************OUTPUT***************

Input current salary.
3400
Your adjusted monthly salary is $3658.4.
Your adjusted yearly salary is $43900.8.
Your retroactive pay increase is $258.4

*/