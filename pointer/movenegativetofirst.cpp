#include <bits/stdc++.h>
using namespace std;

vector<int> separateNegativeAndPositive(vector<int> &nums) {
    int n = nums.size();
    int first = 0; // index where next negative should go

    for(int i = 0; i < n; i++) {
        if(nums[i] < 0) {
            swap(nums[i], nums[first]);
            first++;
        }
    }

    return nums;
}
