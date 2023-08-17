#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
   string firstName, lastName;
   int score;
   fstream inputStream;

     inputStream.open("display.02.10.txt");

     inputStream >> score;
     inputStream >> firstName >> lastName;

     cout << "Name: " << firstName;
     inputStream.close();

   return 0;
}

/*
***************OUTPUT***************

Enter 4 negative numbers, one per line.
-2
-3
6
ERROR: positive number or zero was entered as the 
Reenter that number and continue.
-6
-5
-16 is the sum of the 4 numbers.

*/