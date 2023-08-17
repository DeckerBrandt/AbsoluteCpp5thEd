#include <iostream>
using namespace std;

int main()
{
   int number, sum = 0, count = 0;
   cout << "Enter 4 negative numbers, one per line.\n";

   while (count < 4)
   {
        cin >> number;

        if ( number >= 0)
        {
            cout << "ERROR: positive number or zero was entered as the \n"
                 << "Reenter that number and continue.\n";

            continue;
        }

        sum = sum + number;
        count++;
   }

    cout << sum << " is the sum of the " << count << " numbers.\n";

    return 0;
}

/*
***************OUTPUT***************



*/