// maximum subarray
class Solution{
    public:
    int lengthOfLongestSubstring(string s){
        unordered_set<char> ch;
        int left=0;
        int maxlen=0;
        for(int i=0;i<s.length();i++{
            while(ch.count(s[i])){
                ch.erase(s[left]);
                left++;
            };
            ch.insert(s[i]);
            maxlen=max(maxlen,i-left+1);
        }
        return maxlen;
    }
}