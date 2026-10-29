// Array Manipulating concept:

// 3. C(Create) - Insertion
// 1. R(Read) - Traversal
// 2. U(Update) - Modification
// 4. D(Delete) - Deletion




// 1. Traversal: Visiting
//- process of visiting every element exactly once in a systematic order to perform some operation on it
// there are three way to traverse an array:

#include <iostream>
#include <vector>
using namespace std;

// method 1 : using for loop(most commonly used)
int methodone(int arr[], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
// time complexity: O(n) and space complexity: O(1)

// method 2:  using while loop

int methodtwo(int arr[], int k)
{
    int i = 0; // starting index
    while (i < k)
    {
        cout << arr[i] << " ";
        i++; // increment
    }
    return 0;
}
// tc: O(n) and sc: O(1)

// Important : method three: Pointer traversal
int methodthree(int arr[], int k)
{
    int *p = arr; // pointer to first element
    for (int i = 0; i < k; i++)
    {
        cout << *(p + i) << " "; // p+i -> moves pointer to next element then *(p+i) -> gets value
    }
    return 0;
}
// tc: O(n) and sc: O(1)

// method 4: Range based loop
int methodfour(const vector<int> &arr)
{
    for (int x : arr)
    {
        cout << x << " ";
    }
    return 0;
}

// there are two types of traversal:
//  1. Forward : left to right
//  2. Backward : right to left

int forward(int arr[], int k)
{
    for (int i = 0; i < k; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}


int backward(int arr[], int k)
{
    for (int i = k - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    vector<int> vecArr = {1, 2, 3, 4, 5};
    int k = 5;
    methodone(arr, k);
    cout << "\n";
    methodtwo(arr, k);
    cout << "\n";
    methodthree(arr, k);
    cout << "\n";
    methodfour(vecArr);
    cout << "\n";
    forward(arr, k);
    cout << "\n";
    backward(arr, k);
    return 0;
}
// why vector in range based loop: because range based loop doesn't work with rawarray.
