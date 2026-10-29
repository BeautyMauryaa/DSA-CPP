// switch as a cleaner alternative to writing a long chain of if else if when you arecomparing one variable against many fixed value

#include <iostream>
using namespace std;

int main()
{
    int day = 3;

    if (day == 1)
    {
        cout << "Monday";
    }
    else if (day == 2)
    {
        cout << "Tuesday";
    }
    else if (day == 3)
    {
        cout << "Wednesday";
    }
    else
    {
        cout << "Invalid day";
    }

    // with switch
    int day = 3;

    switch (day)
    {
    case 1:
        cout << "Monday";
        break;

    case 2:
        cout << "Tuesday";
        break;

    case 3:
        cout << "Wednesday";
        break;

    default:
        cout << "Invalid day";
    }

    // without break:
    int day = 2;

    switch (day)
    {
    case 1:
        cout << "Monday";
    case 2:
        cout << "Tuesday";
    case 3:
        cout << "Wednesday";
    }

    // TuesdayWednesday because after matching case 2 it keeps executing the next cases this is called fall-through

    return 0;
}