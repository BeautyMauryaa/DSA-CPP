// it is kind of dynamic array(in the normal array the size is fixed but in this the size will grow and shrink on runtime as per need)

// most used function vector:
// push_back(add in the end)
// pop_back(remove from end)
// size()-check the number of element present in vector
// empty()-check vector is empty or not
// v[i]/v.at(i)- access
// v.front()/v.back()- first and last
// v.begin()/v.end()-iterators
// v.clear()- delete
// v.erase(it)-specific position delete
// insert(it,x)-specific position insert(it(index),x(element))
// v.resize(n) -size change
// v.assign(n,x)

// declaration:
#include <iostream>
#include <vector> //to use vector we have to include this in header file
#include <algorithm>
using namespace std;

void aboutvector()
{
    // there aremany way to declare a vector
    vector<int> v;                 // empty vector
    vector<int> v2(5);             // size is 5 but default value is 0
    vector<int> v3(5, 8);          // size 5 with default value 8
    vector<int> v4 = {1, 2, 3, 4}; // initialized
    vector<vector<int>> v5;        // 2d vector matrix

    // traversal:
    for (int i = 0; i < v4.size(); i++)
    { // by using index
        cout << v4[i];
    }

    // //range based(preferred)
    // for(int x:v) cout<<x;

    // iterator
    for (auto it = v4.begin(); it != v4.end(); it++)
    {
        cout << *it;
    }

    // size(actual number of element) and capacity(total space of box)
    cout << v4.size(); // 4
    cout << v4.capacity();

    // when vector gets full (if size==capacity then vector creates bigger memory(usually double or 1.5x then previous) and copy old element and paste it in new ..and delete the old on)
}

void vectorinp(int n)
{
    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int x : v)
        cout << x << " ";
    cout << endl;
    cout << v.size() << " and " << v.capacity();
}

void sumandavg()
{
    vector<int> v = {1, 2, 3, 8, 9};
    int sum = 0;
    for (int x : v)
        sum += x;
    cout << "Sum:" << sum << endl;
    cout << "Average: " << sum / v.size() << endl;
}

void maxandmin()
{
    vector<int> v = {1, 9, 2, 0, 5, 7};
    int maxVal = v[0], minVal = v[0];

    for (int x : v)
    {
        if (x > maxVal)
            maxVal = x;
        if (x < minVal)
            minVal = x;
    }

    cout << "Max: " << maxVal << endl;
    cout << "Min: " << minVal << endl;
}

void revvec()
{
    vector<int> v = {1, 2, 3, 5, 6};
    int left = 0, right = v.size() - 1;
    while (left < right)
    {
        swap(v[left], v[right]);
        left++;
        right--;
    }
    for (int x : v)
        cout << x << " ";
}

void removeduplicate()
{
    vector<int> v = {1, 3, 1, 1, 5, 7, 8, 7, 4};
    sort(v.begin(), v.end());
    v.erase(unique(v.begin(), v.end()), v.end());

    for (int x : v)
        cout << x << " ";
}

void seclargest()
{
    vector<int> v = {10, 5, 35, 6, 23, 9};
    sort(v.begin(), v.end(), greater<int>());
    int largest = v[0];
    int seclarg = -1;
    for (int x : v)
    {
        if (x < largest)
        {
            seclarg = x;
            break;
        }
    }
    cout << "second largest: " << seclarg << endl;
}



//leetcode 485: maxcount Consecutive of ones:

int Consecutiveones(vector<int> nums){
    int maxcount=0,count=0;
    for(int num:nums){
        if(num==1){
            count++;
        }else{
            count=0;
        }
        maxcount=max(maxcount,count);
    }
    return maxcount;
}
int main()
{
    aboutvector();
    vector<int> v;
    for (int i = 1; i <= 10; i++)
    {
        v.push_back(i);
        cout << "Size" << v.size() << "capacity" << v.capacity() << endl;
    }

    int n;
    cin >> n;
    vectorinp(n);

    cout << "sum and avg: " << endl;
    sumandavg();

    cout << "min and max: " << endl;
    maxandmin();

    cout << "vector reverse: ";
    revvec();

    cout << "remove duplicate: ";
    removeduplicate();


    seclargest();

    //findMaxConsecutiveOnes:
    cout<<"max count Consecutive of ones: "<<endl;
    vector<int> nums={1,5,6,0,0,0,1,1};
   int result= Consecutiveones(nums);
   cout<<result;

    return 0;
}
