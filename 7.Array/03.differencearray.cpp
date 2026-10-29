//prefixsum: tell the sum from x to y
// difference array: update every element from x to y

// Add +5 from index 1 to 3
 
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> arr = {10,20,30,40,50};

    int n = arr.size();

    vector<int> diff(n,0);

    // Add +5 from index 1 to 3

    diff[1] += 5;

    if(4<n)
        diff[4]-=5;

    // Prefix Sum

    for(int i=1;i<n;i++)
    {
        diff[i]+=diff[i-1];
    }

    // Final Array

    for(int i=0;i<n;i++)
    {
        arr[i]+=diff[i];
    }

    for(int x:arr)
        cout<<x<<" ";
}