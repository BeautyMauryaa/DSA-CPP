// floor- a number which is < than or = to x
//  for ex: 4.8 = floor will 4
// think its like round down

// negative num:
//  for ex: [-2.3]= the floor will be -3 why
// bcoz if we take -2 and -3 and compare them then -2 will be greater than -3 so floor is always the numb less than or equal to x

// ciel function- a number which is > than and equal to x
//  for ex: 4.8 = ceil will 5(round up)

// negative num: then it will be -2

// how we use in dsa:
// suppose int n=10; int k=3; how many group of size 3?
//  ans: n/k; 10/3=3.33 so floor will be 3

// binary search: left=0; right=9; middle?
//  mid=(left+right)/2; actually [(0+9)/2] which is [4.5]= floor will be 4

// thats why int division automatically gives the floor value

// common trick:
//  ceil((double)a/b) use (a+b-1)/b

// question1:
//  A classroom has 25 students.
//  One bench can seat 4 students.
//  What is the minimum number of benches required so that every student gets a seat?

// question2.:
//  You need to upload 100 files.
//  A server can process 8 files per minute.
//  What is the minimum number of minutes required?

#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int stud = 25;
    int bench = 4;
    // minimum means floor value
    //  cout<<floor(stud/bench)<<endl;

    // math  rule: when you need to minimum container/boxes/benches/pages/group to hold something use ceil(total/capacity)

    // without using ceil:
    cout << (stud + bench - 1) / bench << endl;

    int file = 100;
    int server = 8;
    // with using ceil:
    cout << ceil((double)file / server) << endl;
    cout << (file + server - 1) / server << endl;
    return 0;
}
