// given an inetger N, count the total number of digits in N
#include <iostream>
using namespace std;

int countdigit(int n)
{
    int count = 0;
    while (n != 0)
    {
        count++;
        n = n / 10;
    }
    return count;
}

// cont in string:
int countstring(string s)
{
    return s.length();
}

// count char and digit both

int chardigit(string s)
{
    int digitcount = 0;
    int charcount = 0;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            digitcount++;
        }
        else
        {
            charcount++;
        }
    }

    cout << "Characcters: " << charcount << "\n";
    cout << "Digits: " << digitcount << "\n";
    return 0;
}

int main()
{
    int n;
    cout << "enter the digits in n: ";
    cin >> n;
    cout << countdigit(n) << "\n";

    string s;
    cout << "enter the char in s: ";
    cin >> s;
    cout << countstring(s) << "\n";

    string s1;
    cout << "enter the char and digit in s1: ";
    cin >> s1;
    chardigit(s1);
    return 0;
}
