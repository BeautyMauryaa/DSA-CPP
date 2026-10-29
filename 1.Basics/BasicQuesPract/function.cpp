// function: a block of code which is executed only when it is called.

// syntax
//  return_type function_name(parameters){
//      //code
//      return value;
//  }

// pass by value: copy of the original value
// pass by reference: address of the original value

// pass by value:
#include <iostream>
using namespace std;
int sum(int a, int b)
{
    int c = a + b;
    return c;
}

// pass byref:
void modify(int &a)
{
    a = a + 10;
}

int main()
{
    int a, b;
    cin >> a >> b;
    cout << sum(a, b) << endl;

    int x = 5;
    modify(x);
    cout << x << endl; // Output: 15
    return 0;
}
