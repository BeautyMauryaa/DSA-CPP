// maximum nuber of vowel in substring of given length
class Solution
{
public:
    bool isvowel(char ch)
    {
        return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
    }
    int maxVowels(string s, int k)
    {
        int n = s.size();
        int count = 0;
        int maxcount = 0;
        for (int i = 0; i < k; i++)
        {
            if (isvowel(s[i]))
            {
                count++;
            }
        }
        maxcount = count;
        for (int i = k; i < n; i++)
        {
            if (isvowel(s[i - k]))
            {
                count--;
            }
            if (isvowel(s[i]))
            {
                count++;
            }
            maxcount = max(maxcount, count);
        }
        return maxcount;
    }
};