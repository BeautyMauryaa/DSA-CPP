// class Solution {
// public:
//     vector<int> selectionSort(vector<int>& nums) {
//        int n=nums.size();
//        for(int i=0;i<n-1;i++){
//         for(int j=i+1;i<n;i++){
//             if(nums[j]<nums[i]){
//                 swap(nums[i],nums[j])
//             }
//         }
//        }
//     }
// };

// class Solution {
// public:
//     vector<int> bubbleSort(vector<int>& nums) {
//         int n=nums.size();
//         for(int i=0;i<n-1;i++){
//             for(int j=0;j<n-i-1;j++){
//                 if(nums[j]>nums[j+1]){
//                     swap(nums[j],nums[j+1]);
//                 }
//             }
//         }
//         return nums;

//     }
// };


// class Solution {
// public:
//     vector<int> insertionSort(vector<int>& nums) {
//         int n = nums.size();

//         for (int i = 1; i < n; i++) {
//             int j = i;
//             while (j > 0 && nums[j] < nums[j - 1]) {
//                 swap(nums[j], nums[j - 1]);
//                 j--;
//             }
//         }

//         return nums;
//     }
// };



// Selection Sort

// Idea: Repeatedly find the minimum element from the unsorted part and put it in the correct place.

// How it works:

// Scan the unsorted array to find the smallest element.

// Swap it with the first element of the unsorted part.

// Repeat for the next position.

// Key points:

// Number of swaps is minimal — at most n-1.

// Does not care if the array is partially sorted; always scans entire unsorted part.

// Time Complexity: O(n²) in all cases.

// Example: [64, 25, 12, 22, 11] → [11, 12, 22, 25, 64]

// 2️⃣ Bubble Sort

// Idea: Repeatedly compare adjacent elements and swap if they are in the wrong order; largest elements “bubble” to the end.

// How it works:

// Start from the beginning.

// Compare adjacent elements.

// Swap if out of order.

// After each pass, the largest element is at its final position.

// Key points:

// Many swaps, especially for reversed arrays.

// Can be slightly optimized with a flag to stop early if no swaps occurred.

// Time Complexity: O(n²) in worst/average case, O(n) in best case (already sorted + optimization).

// Example: [5, 1, 4, 2, 8] → pass by pass → [1, 2, 4, 5, 8]

// 3️⃣ Insertion Sort

// Idea: Build a sorted array one element at a time, inserting each new element into its correct position.

// How it works:

// Consider the first element as sorted.

// Take the next element and place it in the correct position in the sorted part.

// Repeat for all elements.

// Key points:

// Works very efficiently for nearly sorted arrays.

// Shifts elements instead of swapping multiple times.

// Time Complexity: O(n²) worst case, O(n) best case.

// Example: [7, 4, 1, 5, 3] → insert 4 before 7 → insert 1 before 4 → … → [1, 3, 4, 5, 7]



#include<iostream>
using namespace std;
int main(){
    int nums[5]={4,3,7,1,0};
   int left=0;
   int right=5-1;
   int mid=left+right/2;
   for(int i=0;i<5;i++){
    if(nums[i]<nums[left]){
        swap(nums[i],nums[left]);
    }else if(nums[i]==nums[mid]){
        nums[mid]=nums[i];
    }else{
        swap(nums[i],nums[right]);
    }
   }

   for(int j=0;j<5;j++){
    cout<<nums[j]<<" "<<endl;
   }
   return 0;
}