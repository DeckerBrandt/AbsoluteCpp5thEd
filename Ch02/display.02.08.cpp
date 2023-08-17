#include <iostream>
using namespace std;

int main()
{
   int number, sum = 0, count = 0;
   cout << "Enter 4 negative numbers.\n";

   while (++count <= 4)
   {
        cin >> number;

        if ( number >= 0)
        {
            cout << "ERROR: positive number."
                 << " or zero was entered as the \n"
                 << count << "th number! Input ends with the "
                 << count << "th number.\n" << count
                 << "th number was not added in.\n";

            break;
        }

        sum = sum + number;
   }

    cout << sum << " is the sum of the first " << (count - 1)
         << " numbers.\n";

    return 0;
}

/*
***************OUTPUT***************

Enter 4 negative numbers.
-3    
-2
-1
4 
ERROR: positive number. or zero was entered as the 
4th number! Input ends with the 4th number.
4th number was not added in.
-1 is the sum of the first 3 numbers

*/