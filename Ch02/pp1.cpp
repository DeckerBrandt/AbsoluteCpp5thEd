/*

pp02.01.cpp

inflation = 0.056
200 pencils
current price pencils = 10
3 years

current price * inflation
inflation after one year is .56
new price after 1 year = 10.56

previous year price * inflation
10.56 * .056 = 0.59136
inflation after second year is .0.59136
new price after 2 years = 11.15136

... //loop

print out the important info.

See notes from  chapter 1 on how to make the
output look like $45.82instead of $ 45.82222222

*/

#include <iostream>
using namespace std;

int main()
{
    float inflationRate, currentPrice, totalNewPrice, singularNewPrice;
    int years, ogYears, numberOfPencils;


    cout << "Input the number of pencils needed." << endl;
    cin >> numberOfPencils;
    // numberOfPencils = 2000;

    cout << "Input the number of years the pencils shall be bought." << endl;
    cin >> years;
    // years = 5;

    cout << "Input the price of a pencil." << endl;
    cin >> currentPrice;
    // currentPrice = 1;

    cout << "Input the current rate of inflation." << endl;
    cin >> inflationRate;
    // inflationRate = 5;


    inflationRate = inflationRate / 100;
    ogYears = years;

    while (years > 0)
        {
            currentPrice = ((currentPrice * inflationRate) + currentPrice);

            totalNewPrice = currentPrice * numberOfPencils;

            singularNewPrice = currentPrice;

            years = years - 1;
        }

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint);
    cout.precision(2);

    cout << "The cost of a pencil in " << ogYears << " years will be $" << 
        singularNewPrice << ".\nThe total cost of your penccils will be $" 
        << totalNewPrice << endl;


    return 0;
}