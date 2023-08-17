#include <iostream>
using namespace std;

int main()
{
    int numberOfItems, count, caloriesForItem, totalCalories;

    cout << "How many items did you at today?";
    cin >> numberOfItems;
    totalCalories = 0;
    count = 1;
    cout << "Enter the number of calories in each of the " << numberOfItems 
        <<" items eaten: ";

    while (count++ <= numberOfItems)
    {
        cin >> caloriesForItem;
        totalCalories = totalCalories + caloriesForItem;
    }

    cout << "Total calories eaten today = " << totalCalories << endl;

    return 0;
}

/*
***************OUTPUT***************

How many greetings do you want?5
Hello Hello Hello Hello Hello 
That's all!

*/