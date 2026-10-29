// Q1. Take array input from user, print in reverse
//     Input:  5 elements → 1 2 3 4 5
//     Output: 5 4 3 2 1

// Q2. Find max and min in array using a function
//     (return both using reference params)


//   Q3.Pointer basics
//     - Declare int variable
//     - Point a pointer to it
//     - Change value using pointer
//     - Print address and value both


// Q4. String reverse without using reverse()
//     Use your own loop

// Q5. Check if string is palindrome
//     Input: "madam" → Yes
//     Input: "hello" → No

#include <iostream>
#include <algorithm>
using namespace std;


void findMinMax(int arr[], int n, int& mn, int& mx) {
    mn = arr[0];
    mx = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] < mn) mn = arr[i];
        if(arr[i] > mx) mx = arr[i];
    }
}

int main()
{
    int n;
    cout << "enter the size of array: ";
    cin >> n;

    int arr[n];
    cout << "enter the element of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    reverse(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    // int min=0,max=0;
    // min=*min_element(arr,arr+n);
    // max=*max_element(arr,arr+n);
    // cout<<"\nmax element is "<<max<<" and min element is "<<min;

    int min, max;
    findMinMax(arr, n, min, max);
    cout << "\nmax element is " << max << " and min element is " << min;

    int val=10;
    int *ptr=&val;
    *ptr=20;
    cout<<val<<endl;
    cout<<"address is: "<<&val<<endl;
    cout<<"same address: "<<ptr<<endl;
    cout<<"value is: "<<*ptr<<endl;

   // 4. Reverse string
string s = "Noova";
int i = 0;
int j = s.length() - 1;

while(i < j){
    char temp = s[i];
    s[i] = s[j];
    s[j] = temp;
    i++;
    j--;
}
cout << s << endl;


// 5. Palindrome check
string s1 = "level";
int i2 = 0;
int k = s1.length() - 1;
bool ispalindrome = true;

while(i2 < k){
    if(s1[i2] != s1[k]){
        ispalindrome = false;
        break;
    }
    i2++;
    k--;
}

if(ispalindrome){
    cout << "palindrome";
} else {
    cout << "not palindrome";
}
    
    return 0;
}