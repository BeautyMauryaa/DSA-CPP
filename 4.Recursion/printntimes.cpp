#include <iostream>
using namespace std;

int printNtimes(int n)
{
    if (n == 0)
        return 1;
    cout << n << endl;
    printNtimes(n - 1);
    return 0;
}

int main()
{
    int n;
    cin >> n;
    printNtimes(n);
    return 0;
}