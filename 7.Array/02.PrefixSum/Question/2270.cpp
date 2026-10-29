// Number of ways to split array
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10, 4, -8, 7};
    int n = arr.size();
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // split and count:
    int count = 0;
    for (int i = 0; i < n - 1; i++)
    {
        int leftsum = prefix[i];
        int rightsum = prefix[n - 1] - prefix[i];
        if (leftsum >= rightsum)
        {
            count++;
        }
    }
    cout << count << "\n";
    return 0;
}