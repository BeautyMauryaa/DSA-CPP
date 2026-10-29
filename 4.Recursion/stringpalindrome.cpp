#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool strpalindrome(string a)
{
    string conversion;
    for (char c : a)
    {
        if (isalnum(c))
        {
            conversion += tolower(c);
        }
    }

    int left = 0;
    int right = conversion.length() - 1;
    while (left < right)
    {
        if (conversion[left] != conversion[right])
        {
            return false;
        }
        left++;
        right--;
    }
    return true;
}

int main()
{
    string a = "hannah";
    cout << strpalindrome(a);
    return 0;
}