// changing the value of an existing element at a given index without altering the array's size or structure

// Address=Base+(index*size)

#include <iostream>
using namespace std;

// int main()
// {

//     int arr[10] = {10, 20, 30, 40, 50};
//     arr[2] = 100;
//     for (int i = 0; i < 5; i++)
//     {
//         cout << arr[i] << " ";
//     }
//     return 0;
// }

// by user input

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int index, value;
    cout << "Enter the index and value: ";
    cin >> index >> value;

    // invalid index
    if (index < 0 || index >= size)
    {
        cout << "Invalid index";
        return 1;
    }

    arr[index] = value;
    for (int i = 0; i < 5; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}