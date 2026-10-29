#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n = arr.size();
    int k = 10;
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        int sum = arr[start] + arr[end];
        if (sum == k)
        {
            cout << arr[start] << " " << arr[end] << "\n";
            start++;
            end--;
        }
        else if (sum < k)
        {
            start++;
        }
        else
        {
            end--;
        }
    }
    return 0;
}