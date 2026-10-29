#include <iostream>
#include <bits/stdc++.h>
using namespace std;


vector<int> twosum(vector<int> &nums, int target)
{
    unordered_map<int, int> mp;
    for (int i = 0; i < nums.size(); i++)
    {
        int need = target - nums[i];
        if (mp.count(need))
        {
            return {mp[need], i};
        }
        mp[nums[i]] = i;
    }
    return {};
}

bool canConstruct(string ransomNote, string magazine)
{
    int freq[26] = {0};
    for (char ch : magazine)
        freq[ch - 'a']++;
    for (char ch : ransomNote)
    {
        freq[ch - 'a']-- ;
        if (freq[ch - 'a'] < 0)
        {
            return false;
        }
    }
    return true;
}


bool palindrome(int x){
    if(x<0){
        return false;
    }

int real=x;
long long rev=0;
while(x>0){
    int data=x%10;
    rev=rev*10+digit;
    x=x/10;
}
return real==rev;
}


int main()
{
    vector<int> nums = {1, 2, 3, 4, 6, 7, 8};
    int target;
    cin >> target;
    vector<int> res = twosum(nums, target);
    cout << res[0] << " " << res[1];

    cout << endl;
    string ransomNote, magazine;
    cin >> ransomNote;
    cin >> magazine;
    bool result = canConstruct(ransomNote, magazine);
    cout << result;
    return 0;
}