// 1. Modular arthimatic(%):
//- used to find remainder
//- use case like rotating array,finding remainder
// why we need in dsa: sometimes we get very long ans unable to store in int or long long so we write in the form of modular
// ex: 10^9+7=1000000007

// four rules:
// 1. (a+b)%m=(a%m+b%m)%m
// 2. (a-b)%m=(a%m-b%m)%m
// 3. (a*b)%m=(a%m*b%m)%m
// 4. (a/b)%m=(a%m/b%m)%m

#include <iostream>
#include <vector>
using namespace std;

const int MOD = 1000000007;
int main()
{
    int a, b;
    cin >> a >> b;
    cout << (a + b) % MOD << endl; // canbe overflow so use long long instead of int
    return 0;
}

// GCD and LCM
// why we need this in dsa?
// 1. to find gcd of two numbers
// 2. to find lcm of two numbers

// GCD: greatest common divisor
// LCM: least common multiple

// ex: gcd(12,15)=3
// ex: lcm(12,15)=60

// formula: euclidean algorithm(recursive algorithm)
// 1. gcd(a,b)=gcd(b,a%b)=>if(b=0) return a else b=0 return a
// 2. lcm(a,b)=a*b/gcd(a,b) => lcm(a,b)=a/gcd(a,b)*b

#include <iostream>
using namespace std;

int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);
}

int lcm(int a, int b)
{
    return (a * b) / gcd(a, b);
}

// prime number: a number that has exactly two factor (  1 and itself)
// ex: 2,3 5,7,11 etc
// composite number(which are not prime number ex: 4,6,8,9,12 etc)
//  how to check:
bool isprime(int n)
{
    if (n <= 1)
        return false;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
            return false;
    }
    return true;
} // ans will be right but time complexity is O(n)

// so better approach is like this:

bool isPrime(int n)
{
    if (n <= 1)
        return false;
    else if (n == 2)
        return true;
    else if (n % 2 == 0)
        return false; // even num
    for (int i = 3; i * i <= n; i += 2)
    {
        if (n % i == 0)
            return false;
    }
    return true;
} // time complexity is O(sqrt(n)) (fast)

// Sieve of Eratosthenes algorithm
// find the prime number from 1 to n (find all prime number at one go)
// then we can use this algorithm to find the prime number from 1 to n in O(nloglog(n)) time complexity

// instead of finding prime remove non primes from the array or list
//  step 1: start with 2 and remove all multiples of 2
//  step2: move to 3 and remove all multiples of 3
//  step3: continue to remaining number

// ex: 10
// 2 3 4 5 6 7 8 9 10
// 2 3 5 7 9
// 2 3 5 7 9

vector<bool> sieve(int n)
{
    vector<book> prime(n + 1, true);
    prime[0] = false;
    prime[1] = false;
    for (int i = 2; i * i <= n; i++)
    {
        if (prime[i])
        {
            for (int j = i * i; j <= n; j += i)
            {
                prime[j] = false;
            }
        }
    }
    return prime;
}

// time complexity: O(nloglog(n))

// prime factorization
// ex: 12=2*2*3
// ex: 24=2*2*2*3

void primefactor(int n)
{
    for (int i = 2; i * i <= n; i++)
    {
        while (n % i == 0)
        {
            cout << i << " ";
            n = n / i;
        }
    }
    if (n > 1)
        cout << n;
}


// GCD         → Euclidean: GCD(a,b) = GCD(b, a%b)
// LCM         → (a/GCD) * b
// Prime check → √n tak loop
// Sieve       → O(n log log n)
// Fast Pow    → O(log n), exp half karte raho
// nCr         → n! / (r! * (n-r)!)
// Mod sub     → (a-b+MOD) % MOD
// Binary      → baar baar 2 se divide, remainder lao