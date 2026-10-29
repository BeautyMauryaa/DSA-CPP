// adding new element at a specified position by shifting the existing element to create space for the new element
// direction to shift the element: right -> left
// ex: 10 20 30 40 50
// insert 25 at 2nd position
// 10 20 25 30 40 50

#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int size = 5;

    int value = 24;
    int index = 4;


    if(size>=10){
        cout<<"Array full\n";
        return 0;
    }


    // shift element
    for (int i = size; i > index; i--)
    {
        arr[i] = arr[i - 1];
    }

    // insert element
    arr[index] = value;
    size++;

    // print value
    for (int i = 0; i < size ; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}


//dry run: 
// initial: 10 20 30 40 50
// shift: move 50 right by 1 (only element after index 4)
//         10 20 30 40 _ 50
// insert 24 at index 4:
//         10 20 30 40 24 50




//different type of insertion: 
//1. insert at the end tc O(1) and sc O(1)
//2.  insert at middle tc O(n) and sc O(1)
//3. insert at start tc O(n) and sc O(n)


