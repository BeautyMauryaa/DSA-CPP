#include <iostream>
using namespace std;

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  // Calculate middle index

        if (arr[mid] == target)
            return mid;  // Found the element, return its index

        else if (arr[mid] < target)
            left = mid + 1;  // Search in right half

        else
            right = mid - 1; // Search in left half
    }
    return -1;  // Element not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 15}; // Sorted array
    int size = sizeof(arr) / sizeof(arr[0]); // Calculate array size
    int target = 7;

    int index = binarySearch(arr, size, target);

    if (index != -1)
        cout << "Element found at index: " << index;
    else
        cout << "Element not found";

    return 0;
}
