// control structure allow execute specific block of code multiple time
// 1. for loop
// 2. while loop
// 3. do while loop

#include <iostream>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
    }

    // nested loop: loop inside loop
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << "i = " << i << ", j = " << j << endl;
        }
    }
    return 0;
}