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
    for (int i = 0; i < s.length(); i++)
    {
        cout << s[i] << " ";
    }
}

int main()
{
    int n;