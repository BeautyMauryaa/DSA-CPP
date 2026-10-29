// range sum query - immutable

class NumArray
{
public:
    vector<int> Prefix;
    NumArray(vector<int> &nums)
    {
        int n = nums.size();
        Prefix.resize(n);
        Prefix[0] = nums[0]; // means sum of first element
        for (int i = 1; i < n; i++)
        {
            Prefix[i] = Prefix[i - 1] + nums[i]; // Prefix[i] means sum of first i element and prefix[i-1] means sum of first i-1 element and nums[i] means i th element //why this formula: sum of first i element = sum of first i-1 element + i th element
        }
    }

    int SumRange(int left, int right)
    {
        if (left == 0)
            return Prefix[right];
        return Prefix[right] - Prefix[left - 1]; // Prefix[right] means sum of first right element and Prefix[left-1] means sum of first left-1 element
    }
}