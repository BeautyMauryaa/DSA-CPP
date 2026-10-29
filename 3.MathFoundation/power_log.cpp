#include <bits/stdc++.h>
using namespace std;
long long power(long long baseint exp)
{
    long long result = 1;
    for (int i = 0; i < exp; i++)
    {
        result *= baseint;
    }
    return result;
}
int main()
{
    int base, exp;
    cin >> base >> exp;
    cout << power(base, exp);
}

// 12. FAST EXPONENTIATION (Binary Exponentiation) — O(log n)
long long fastPow(long long base, long long exp, long long mod) {
    long long result = 1;
    base = base % mod;
    while (exp > 0) {
        if (exp % 2 == 1)              // exp odd hai
            result = result * base % mod;
        base = base * base % mod;      // base square karo
        exp = exp / 2;                 // exp half karo
    }
    return result;
}