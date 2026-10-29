// Two pointer: it is technique for solving array and string problem efficiently.
// why do we need two pointer?
// 1. to reduce the time complexity
// 2. to reduce the space complexity

// ex: [2,7,11,5] target 9
// brute force: tc O(n square) and sc: O(1)
// two pointer: tc O(n) and sc O(1)

// so instaed of checking  every pair use two indices
// left pointer and right pointer -> both will move based on condition

// two pointer will work:
// when array is sorted, working with pair, subarray, remove duplicates, merging sorted arrays and plaindrome checking

// ex: arr =[1,2,4,6,8,10] target=10
// start L=0 and R=5
// current pair: 1+10=11 too big
// since the array is sorted decreasing the right pointer makes the sum smaller.
// now L=0 and right=4 now 1+8 <10
// increase the left pointer: now L=1 and R=4 2+8=10 found the ans

// rule:
// if sum<target move left++;
// if sum>target move right--;



#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 6, 8, 10};

    int target = 10;

    int n = sizeof(arr) / sizeof(arr[0]);

    int left = 0;
    int right = n - 1;

    bool found = false;

    while (left < right)
    {
        int sum = arr[left] + arr[right];

        if (sum == target)
        {
            cout << arr[left] << " " << arr[right];
            found = true;
            break;
        }
        else if (sum < target)
        {
            left++;
        }
        else
        {
            right--;
        }
    }

    if (!found)
    {
        cout << "Invalid Target";
    }

    return 0;
}