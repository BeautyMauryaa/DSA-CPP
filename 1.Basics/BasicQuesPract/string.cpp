// its like series of character in a specific order
// and each char assigned a unique number called index

#include <iostream>
#include <string>
using namespace std;

string modifyString(string str)
{
    // Assign str to a new variable
    string newStr = str;

    // Modify the new string
    newStr[0] = 'H';

    // Return the modified string
    return newStr;
}

class Solution
{
public:
    bool compareStrings(string str1, string str2)
    {
        return str1 == str2;
    }
};

int main()
{
    string str = "hello";
    cout << str[0] << "\n";
    cout << str[1] << "\n";
    cout << str[2] << "\n";
    cout << str[3] << "\n";
    cout << str[4] << "\n";

    // to find the length of string
    cout << str.length() << "\n";

    // to find the size of string
    cout << str.size() << "\n";
    // both are same

    // accessing individual char
    for (int i = 0; i < str.length(); i++)
    {
        cout << str[i] << "\n";
    }

    // passing returning and assigning string:
    string newStr = str;
    newStr = "bye";
    cout << newStr << "\n";

    // passing returning and assigning string:
    string newStr1 = modifyString(str);
    cout << newStr1 << "\n";

    // comparing string
    // create object of Solution class

    Solution obj;
    string str1;
    cin >> str1;
    string str2;
    cin >> str2;

    if (obj.compareStrings(str1, str2))
    {
        cout << "Strings are equal";
    }
    else
    {
        cout << "Strings are not equal";
    }
    return 0;
}