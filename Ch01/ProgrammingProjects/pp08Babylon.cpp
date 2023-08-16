#include <iostream>
using namespace std;

int main()
{
    double guess;
    double n;
    double r;

    cout << "Enter the number.\n";
    cin >> n;

    guess = n / 2;

    r = n / guess;

    guess = (guess + r) / 2;
    
    r = n / guess;

    guess = (guess + r) / 2;
    
    r = n / guess;

    guess = (guess + r) / 2;
   
    r = n / guess;

    guess = (guess + r) / 2;
    
    r = n / guess;

    guess = (guess + r) / 2;
    
    r = n / guess;

    guess = (guess + r) / 2;

    cout << guess;

    return 0;
}

/*
***************OUTPUT***************

Hello reader.
Welcome to C++.

*/