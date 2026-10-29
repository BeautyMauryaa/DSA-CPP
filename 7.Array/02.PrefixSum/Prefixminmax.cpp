// prefix min and max - the smallest and largest value
// prefix sum - total summ of all element

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {2, 4, 5, 7, 2, 9};
    int n = arr.size();

    vector<int> PrefixMin(n);
    vector<int> PrefixMax(n);

    PrefixMin[0] = arr[0];
    PrefixMax[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        PrefixMin[i] = min(PrefixMin[i - 1], arr[i]);
        PrefixMax[i] = max(PrefixMax[i - 1], arr[i]);
    }

    cout << "Prefix Max: ";
    for (int x : PrefixMax)
        cout << x << " ";

    cout << endl;

    cout << "Prefix Min: ";
    for (int x : PrefixMin)
        cout << x << " ";
    return 0;
}

// trick: PrefixMax[i] = max(previous maximum, current element);
//  PrefixMin[i] = min(previous minimum, current element);