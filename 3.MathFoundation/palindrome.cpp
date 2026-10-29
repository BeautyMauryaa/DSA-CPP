#include <iostream>
using namespace std;

int palindrome(int n)
{
    if (n < 0)
    {
        cout << "negative or invalid number";
    }
    int temp = n;
    long long rev = 0;
    while (n != 0)
    {
        int digit = n % 10;     // last digit
        rev = rev * 10 + digit; // store the last  digit in rev
        n = n / 10;             // reduce the size
    }

    if (rev == temp)
    {
        cout << "yes plaindrome";
    }
    else
    {
        cout << "not palindrome";
    }

    return 0;
}

bool strpalindrome(string s)
{

    int left = 0;
    int right = s.length() - 1;
    while (left < right)
    {
        if (s[left] != s[right])
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
    int n;
    cin >> n;
    palindrome(n);
    cout << endl;

    string s;
    cin >> s;
    if (strpalindrome(s))
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }

    return 0;
}