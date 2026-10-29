// This algo is used to find the max sum of contiguous subarray
// core idea: at every element we have two choices:
// 1. continue the previous subarray
// 2. start a new subarray from the current element

// main logic:
//  currentsum=max(arr[i],currentsum+arr[i]);
//  maxsum=max(maxsum,currentsum)

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int maxSubArray(vector<int> &nums)
{
    int currentSum = nums[0];
    int maxSum = nums[0];

    for (int i = 1; i < nums.size(); i++)
    {
        currentSum = max(nums[i], currentSum + nums[i]);
        maxSum = max(maxSum, currentSum);
    }
    return maxSum;
}

int main()
{
    vector<int> nums = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    cout << maxSubArray(nums);
    return 0;
}

time complexity : 0(n)
    space complexity : 0(1)