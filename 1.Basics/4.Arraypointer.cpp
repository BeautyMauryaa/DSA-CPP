// // Array: collection of similar type data
// // string: array of char
// // pointer: varaible that holds the address of another variable

// // 1.Array:
// #include <iostream>
// using namespace std;
// //  int main(){
// //     int arr[5]={12,8,56,89,90};

// //     cout<<arr[0]<<endl;//we fetch value in array using its index which start from 0 and end with n-1;
// //     cout<<arr[4]<<endl;

// //     int n=sizeof(arr)/sizeof(arr[0]);// size of array
// //     cout<<n<<endl;
// //     return 0;
// //  }

// // 2.infunction:

// void print(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     cout << endl;
// }

// void dblearr(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         arr[i] = arr[i] * 2;
//     }
// }

// // int main(){
// //     int arr[5]={3,4,5,6,7};
// //     print(arr,5);

// //     cout<<endl;
// //     dblearr(arr,5);
// //     print(arr,5);
// //     return 0;
// // }

// // 3.pointers:
// // pointer in array:
// int main()
// {

//     int a = 10;
//     int *ptr = &a; // ptr store the address of a and * means= go to the address of a and print the value of a

//     cout << a << endl;    // 10
//     cout << &a << endl;   // address of a
//     cout << ptr << endl;  // address of a
//     cout << *ptr << endl; // the value which is stored in address of a which is 10

//     // 4.array and pointer connection:
//     int arr[] = {10, 20, 30};
//     int *ptr = arr;

//     cout << arr[0] << endl;
//     cout << ptr[0] << endl;
//     return 0;
// }

// string: array of char

// two way to declare string:
#include <iostream>
#include <algorithm> // required for reverse
using namespace std;

int main()
{

    // 1. Old way (C-style)
    char str[] = "Beauty";
    cout << str << endl; // prints full string till \0(terminator null char)

    // 2. New way (C++ string)
    string str1 = "Beauty";
    cout << str1 << endl;

    int len = str1.length();
    cout << len << endl;

    cout << str1[0] << endl;

    cout << str1.substr(1, 3) << endl;

    reverse(str1.begin(), str1.end());
    cout << str1 << endl;

    // pointer arthimatic:
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr;
    ptr++; // arr+1
    ptr++; // arr+2

    // traverse using pointer:
    for (int *p = arr; p < arr + 5; p++)
    {
        cout << *p << " ";
    }

    return 0;
}


// ->int* ptr;  *ptr = 10;     // dangling pointer — crash
// ->int a=10; int* ptr = &a;  // always point to valid variable

// ->cout << arr.length()      // arrays don't have methods
// ->sizeof(arr)/sizeof(arr[0]) // correct way for raw arrays

// ->string s; s.reverse()     // no such method
// ->reverse(s.begin(),s.end()) // correct


// int arr[] = {1,2,3};
//        ↓
// arr is a POINTER to first element
//        ↓
// arr[i] is same as *(arr+i)
//        ↓
// String is just char array
//        ↓
// char str[] = "hi" → pointer to 'h'