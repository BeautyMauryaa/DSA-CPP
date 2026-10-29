#include <iostream>
#include <math.h>
#include <vector>
#include <algorithm>
using namespace std;

const long long MOD = 1e9 + 7;

// 1. COUNT DIGITS — O(log10 N)
int countDigits(int n)
{
    int digits = 0;
    while (n > 0)
    {
        digits++;
        n = n / 10;
    }
    return digits;
}

int countDigitsLog(int n)
{
    return (int)(log10(n) + 1);
}

// 2. REVERSE A NUMBER
int reverseNum(int n)
{
    int rev = 0;
    while (n > 0)
    {
        int last = n % 10;
        rev = rev * 10 + last;
        n = n / 10;
    }
    return rev;
}

// 3. PALINDROME CHECK
bool isPalindrome(int n)
{
    return reverseNum(n) == n;
}

// 4. ARMSTRONG NUMBER
bool isArmstrong(int n)
{
    int sum = 0, p = n;
    while (n > 0)
    {
        int last = n % 10;
        sum += last * last * last;
        n = n / 10;
    }
    return p == sum;
}

// 5. PRINT ALL DIVISORS — O(sqrt N)
void printDivisors(int n)
{
    vector<int> divs;
    for (int i = 1; i * i <= n; i++)
    {
        if (n % i == 0)
        {
            divs.push_back(i);
            if ((n / i) != i)
                divs.push_back(n / i);
        }
    }
    sort(divs.begin(), divs.end());
    for (auto x : divs)
        cout << x << " ";
    cout << "\n";
}

// 6. PRIME CHECK — O(sqrt N)
bool isPrime(int n)
{
    if (n <= 1)
        return false;
    if (n == 2)
        return true;
    if (n % 2 == 0)
        return false;
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
}

// 7. SIEVE OF ERATOSTHENES — O(n log log n)
void sieve(int n)
{
    vector<bool> prime(n + 1, true);
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
                prime[j] = false;
        }
    }
    cout << "Primes up to " << n << ": ";
    for (int i = 2; i <= n; i++)
        if (prime[i])
            cout << i << " ";
    cout << "\n";
}

// 8. PRIME FACTORIZATION — O(sqrt N)
void primeFactors(int n)
{
    cout << "Prime factors of " << n << ": ";
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n /= i;
        }
    }
    if (n > 1)
        cout << n;
    cout << "\n";
}

// 9. GCD — Euclidean Algorithm
int gcd(int a, int b)
{
    while (a > 0 && b > 0)
    {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    return a == 0 ? b : a;
}

// 10. LCM
long long lcm(int a, int b)
{
    return (long long)(a / gcd(a, b)) * b;
}

// 11. MODULAR ARITHMETIC
long long modAdd(long long a, long long b)
{
    return ((a % MOD) + (b % MOD)) % MOD;
}

long long modSub(long long a, long long b)
{
    return ((a % MOD) - (b % MOD) + MOD) % MOD;
}

long long modMul(long long a, long long b)
{
    return ((a % MOD) * (b % MOD)) % MOD;
}

// 12. FAST EXPONENTIATION (Binary Exponentiation) — O(log n)
long long fastPow(long long base, long long exp, long long mod)
{
    long long result = 1;
    base = base % mod;
    while (exp > 0)
    {
        if (exp % 2 == 1) // agar exp odd hai
            result = result * base % mod;
        base = base * base % mod; // base square karo
        exp = exp / 2;
    }
    return result;
}

// 13. COMBINATORICS — nCr with mod
long long factorial(int n)
{
    long long fact = 1;
    for (int i = 2; i <= n; i++)
        fact = fact * i % MOD;
    return fact;
}

// Modular inverse using Fermat's little theorem
long long modInverse(long long a, long long mod)
{
    return fastPow(a, mod - 2, mod);
}

long long nCr(int n, int r)
{
    if (r > n)
        return 0;
    if (r == 0 || r == n)
        return 1;
    long long num = factorial(n);
    long long den = modMul(factorial(r), factorial(n - r));
    return modMul(num, modInverse(den, MOD));
}

// 14. BINARY CONVERSION
string decToBin(int n)
{
    if (n == 0)
        return "0";
    string bin = "";
    while (n > 0)
    {
        bin = char('0' + n % 2) + bin;
        n /= 2;
    }
    return bin;
}

int binToDec(string bin)
{
    int dec = 0, power = 1;
    for (int i = bin.size() - 1; i >= 0; i--)
    {
        if (bin[i] == '1')
            dec += power;
        power *= 2;
    }
    return dec;
}

// 15. HEX CONVERSION
string decToHex(int n)
{
    if (n == 0)
        return "0";
    string hex = "";
    string chars = "0123456789ABCDEF";
    while (n > 0)
    {
        hex = chars[n % 16] + hex;
        n /= 16;
    }
    return hex;
}

// 16. FLOOR, CEIL, ABS
void floorCeilAbs()
{
    double x = 4.7;
    cout << "floor(4.7) = " << floor(x) << "\n"; // 4
    cout << "ceil(4.7)  = " << ceil(x) << "\n";  // 5
    cout << "abs(-9)    = " << abs(-9) << "\n";  // 9
    cout << "fabs(-4.7) = " << fabs(-x) << "\n"; // 4.7 (for float)
}

int main()
{
    int n = 153, m = 18;

    cout << " COUNT DIGITS\n";
    cout << countDigits(n) << "\n";
    cout << countDigitsLog(n) << "\n";

    cout << "\n REVERSE\n";
    cout << reverseNum(n) << "\n";

    cout << "\n PALINDROME \n";
    cout << (isPalindrome(121) ? "true" : "false") << "\n";

    cout << "\n ARMSTRONG \n";
    cout << (isArmstrong(153) ? "true" : "false") << "\n";

    cout << "\n DIVISORS \n";
    printDivisors(36);

    cout << "\n PRIME CHECK\n";
    cout << (isPrime(17) ? "true" : "false") << "\n";

    cout << "\n SIEVE \n";
    sieve(50);

    cout << "\n PRIME FACTORS \n";
    primeFactors(60);

    cout << "\n GCD / LCM\n";
    cout << "GCD(48, 18) = " << gcd(48, 18) << "\n";
    cout << "LCM(4, 6)   = " << lcm(4, 6) << "\n";

    cout << "\n MODULAR ARITHMETIC \n";
    cout << modAdd(1e9, 1e9) << "\n";
    cout << modSub(5, 9) << "\n";
    cout << modMul(1e9, 1e9) << "\n";

    cout << "\n FAST EXPONENTIATION \n";
    cout << "2^10 mod MOD = " << fastPow(2, 10, MOD) << "\n";

    cout << "\n nCr \n";
    cout << "C(5,2) = " << nCr(5, 2) << "\n";
    cout << "C(10,3) = " << nCr(10, 3) << "\n";

    cout << "\n BINARY CONVERSION \n";
    cout << "13 in binary = " << decToBin(13) << "\n";
    cout << "1101 in decimal = " << binToDec("1101") << "\n";

    cout << "\n HEX CONVERSION \n";
    cout << "255 in hex = " << decToHex(255) << "\n";

    cout << "\nFLOOR / CEIL / ABS \n";
    floorCeilAbs();

    return 0;
}