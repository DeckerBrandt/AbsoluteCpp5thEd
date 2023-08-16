#include <iostream>
using namespace std;

int main()
{
    int numberOfLanguages;

    cout << "Hello reader.\n"
         << "Welcome to C++.\n";

    cout << "How many progamming languages have you used? ";
    cin >> numberOfLanguages;

    if(numberOfLanguages < 1)
        cout << "Read the preface. You may prefer\n"
            << " a more elementary book by the same author.\n";
    else
        cout << "\\ Enjoy the book.\n";
    
    numberOfLanguages = 6;
    int a = numberOfLanguages % 3;

    return 0;
}

/*
***************OUTPUT***************

Hello reader.
Welcome to C++.

*/