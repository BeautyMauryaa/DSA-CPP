// it is the process of removing an element from a specified index by shifting all the elements to the left and reducing the size of the array by one
// notes:
//1. Remove an element
//2. Shift remaining element to the left
//3. decrease size by 1


//deletion always shift to left 
// insertion always shift to right


#include <iostream>
using namespace std;

int main(){
    int arr[10]={10,20,30,40,50};
    int size=5;
    int index=2;

    for(int i=index;i<size-1;i++){
        arr[i]=arr[i+1];
    }

    size--;

    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
//dry run:
// initial: 10 20 30 40 50, size=5, index=2 (delete value 30)

// loop i=2 to size-2=3:
//   i=2: arr[2] = arr[3] → 40
//   i=3: arr[3] = arr[4] → 50

// array now: 10 20 40 50 50
// size-- → size=4

// print: 10 20 40 50



// Delete Beginning	O(n)
// Delete Middle	O(n)
// Delete End	O(1)