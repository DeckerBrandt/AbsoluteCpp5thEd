#include <iostream>
using namespace std;

int main()
{
    int countDown;

    cout << "How many greetings do you want?";
    cin >> countDown;

    do
    {
        cout << "Hello ";
        countDown = countDown - 1;
    } while (countDown > 0);

    cout << endl;
    cout << "That's all!\n";

    return 0;
}

/*
***************OUTPUT***************

How many greetings do you want?5
Hello Hello Hello Hello Hello 
That's all!

*/