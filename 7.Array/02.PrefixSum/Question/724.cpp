#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 7, 3, 6, 5, 6};
    int n = arr.size();
    vector<int> prefix(n);
    prefix[0] = arr[0];
    for (int i = 1; i < n; i++)
    {
        prefix[i] = prefix[i - 1] + arr[i];
    }

    // find left sum  and right sum
    for (int i = 0; i < n; i++)
    {
        int leftsum;
        if (i == 0)
        {
            leftsum = 0;
        }
        else
        {
            leftsum = prefix[i - 1];
        }

        int rightsum = prefix[n - 1] - prefix[i];
        if (leftsum == rightsum)
        {
            cout << i << "\n";
        }
    }
    return 0;
}

// pivot element: summ of previous element and current element
// ex: 1 7 3 6 5 6
// pivot element: 1 8 8 11 16 21

// leftsum=prefix[i-1];
// rightsum=prefix[n-1]-prefix[i]