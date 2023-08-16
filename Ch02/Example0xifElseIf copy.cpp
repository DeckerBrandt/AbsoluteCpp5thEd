#include <iostream>
using namespace std;

int main()
{
    int temperature = -11;
    string day = "Monday";
    const string SUNDAY = "Sunday";
    
    if ((temperature < -10) && (day == SUNDAY))
        cout << "Stay home.";

    else if (temperature < -10) // and day != SUNDAY
        cout << "Stay home, but call work.";

    else if (temperature <= 0) // and temperature >= -10
        cout << "Dress warm.";

    else // temperature > 0
        cout << "Work hard and play hard.";


    return 0;
}

/*
***************OUTPUT***************



*/