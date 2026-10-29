
// Sliding Window is an optimization technique used to solve problems involving continuous (consecutive) elements in an array or string.
// Instead of recalculating every subarray from scratch, we reuse the previous window's result.

// Why do we need Sliding Window?

// Suppose
// arr = [2,1,5,1,3,2]

// k = 3

// Find the maximum sum of any subarray of size 3.

// Possible windows
// [2 1 5] = 8
// [1 5 1] = 7
// [5 1 3] = 9
// [1 3 2] = 6

// Maximum = 9
// ## Brute Force
// For every window,
// calculate the sum again.
// 2+1+5
// 1+5+1
// 5+1+3
// 1+3+2

// Time Complexity

// O(n × k)

// Sliding Window Idea

// Instead of calculating the new window from scratch,

// reuse the previous window.

// Example

// Old Window
// [2 1 5]
// Sum = 8

// Move one step
// New Window
// [1 5 1]
// Instead of
// 1+5+1
// Do
// Old Sum
// 8
// Remove Outgoing Element
// 8 - 2 = 6
// Add Incoming Element
// 6 + 1 = 7
// This is the entire Sliding Window concept.

// Window Visualization
// [2 1 5] 1 3 2

// ↓

// 2 [1 5 1] 3 2

// ↓

// 2 1 [5 1 3] 2

// ↓

// 2 1 5 [1 3 2]

// The window keeps moving.

//  Types of Sliding Window
// 1. Fixed Size Window

// Window size never changes.

// Example
// Size = 3

// Problems
//  Maximum Sum of Size K
// Average of Size K
//  Maximum Vowels of Length K
 
//  2. Variable Size Window

// Window size changes according to a condition.

// Problems

//  Longest Substring Without Repeating Characters
//  Minimum Size Subarray Sum
//  Longest Repeating Character Replacement

//  Fixed Size Sliding Window Algorithm
//  Step 1

// Calculate first window sum.
// windowSum = sum of first k elements

//  Step 2

// Store answer.

// maxSum = windowSum;
//  Step 3

// Slide the window.

// Every move

// Remove outgoing element

// Add incoming element

// Formula

// windowSum = windowSum - arr[i-k] + arr[i];
// Update answer.

//  Why `arr[i-k]`?

// Example
// arr

// 2 1 5 1 3 2

// k = 3
// Current Window
// [2 1 5]

// Next Window
// [1 5 1]

// Incoming element
// arr[3]

// Outgoing element

// arr[0]

// Notice
// 3 - 3 = 0
// Now

// i = 4

// Incoming
// arr[4]
// Outgoing
// arr[1]
// Again
// 4 - 3 = 1

// Hence

// arr[i-k]

// always represents the outgoing element.

// # Complexity
//  Brute Force     O(n × k) O(1)  
//  Sliding Window  O(n)      O(1)  

// When should Sliding Window come to mind?
// Whenever the question contains words like
// Consecutive
// Continuous
// Subarray
//  Substring
//  Size K
//  Window
//  Maximum Sum
//  Minimum Sum
//  Average
//  Count

// # Difference Between Two Pointer & Sliding Window
//  Two Pointer                                Sliding Window                    

//  Two independent pointers                   Two pointers form one window      
//  Used for pairs, palindrome, sorted arrays  Used for subarrays and substrings 
//  Pointers may move differently             Window slides together            
//  Example: Two Sum II                       Example: Maximum Sum Subarray     
//  Trick 

// When you read
// > **"Subarray of size K"**

// Don't think
// Calculate every subarray.

// Think
// Can I reuse the previous window?

// ↓

// Remove one element

// ↓

// Add one element

// ↓

// Update answer


//  Rule

// If the next subarray is almost the same as the previous one, don't calculate it again.
// Reuse the previous answer by removing the outgoing element and adding the incoming element.

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int arr[] = {2,1,3,4,5};

    int n = sizeof(arr) / sizeof(arr[0]);

    int k = 3;

    int windowSum = 0;

    // First Window
    for(int i = 0; i < k; i++)
    {
        windowSum += arr[i];
    }

    int maxSum = windowSum;

    // Slide Window
    for(int i = k; i < n; i++)
    {
        windowSum = windowSum - arr[i-k] + arr[i];

        maxSum = max(maxSum, windowSum);
    }

    cout << maxSum;

    return 0;
}