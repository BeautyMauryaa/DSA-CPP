class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k = k % n;

        //  Reverse entire array
        int start = 0, end = n - 1;
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }

        //  Reverse first k elements
        start = 0;
        end = k - 1;
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }

        //  Reverse remaining elements
        start = k;
        end = n - 1;
        while (start < end) {
            swap(nums[start], nums[end]);
            start++;
            end--;
        }
    }
};
