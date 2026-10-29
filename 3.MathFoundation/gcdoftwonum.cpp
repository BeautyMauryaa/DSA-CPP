#include <iostream>
#include <cmath>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    int ans = 1;
    for (int i = 1; i <= min(a, b); i++)
    { // here we are taking the minimum of a and b
        if (a % i == 0 && b % i == 0)
        { // means if i is a factor of both a and b then it is the gcd
            ans = i;
        }
    }
    return ans;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << gcd(a, b);
}
