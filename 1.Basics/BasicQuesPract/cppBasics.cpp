// array-collection of similar type data(Homogenous)
#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {12, 8, 56, 89, 90};
    cout << arr[0] << endl; // we fetch value in array using its index which start from 0 and end with n-1;
    cout << arr[4] << endl;
    int n = sizeof(arr) / sizeof(arr[0]); // size of array
    cout << n << endl;
    return 0;
}

// whyarray index start from 0 and end with n-1
//=> index start from 0 and end with n-1 beacause an index represent an offset from the beginning of the array(means how far the element from starting position of array)

// for ex: arr[0]=address 1000
//         arr[1]=address 1004
//         arr[2]=address 1008

// to access an element the computer calculate
// address=base_address+(index*size_of_element)
// arr[0]: 1000+(0*4)=1000
// arr[1]: 1000+(1*4)=1004
// so index 0 means move 0 position away from the start
//  index 1 means move 1 position away from the start

// real ex: Imagine i am a runner standing at the starting line of a race track.
// Position 0 = where i am standing now
// Position 1 = one step forward
// Position 2 = two steps forward

// it wouldn't call my current position "1 step away" because you haven't moved yet.
// array work same way
