// // // Print the Fibonacci series	Variables and iteration
// // #include <iostream>
// // using namespace std;
// // int main(){
// //   int num;
// //   cin>>num;
// //   //define first and second num:
// //   long long a=0, b=1;

// //   for(int i=0;i<num;++i){
// //     //print current term
// //     cout<<a<<(i==num-1?"":", ");
// //     long long next=a+b;
// //     a=b;
// //     b=next;
// //   }
// //   cout<<endl;
// //   return 0;
// // }

// #include<iostream>
// using namespace std;
// int main(){
//     int num;
//     cin>>num;
//     long long t0=0,t1=1;
//     long long nexterm=0;
//     for(int i=0;i<num;++i){
//         //print the first two pair as they are
//         if(i==0){
//             cout<<t0;
//             continue;
//         }if(i==1){
//             cout<<t1;
//             continue;
//         }

//         nexterm=t0+t1;
//         t0=t1;
//         t1=nexterm;

//         cout<<nexterm;
//         if(i<num){
//             cout<<", ";
//         }
//     }
//     return 0;

// }

#include <iostream>
using namespace std;
int main()
{
    int term;
    cin >> term;

    long long t0 = 0, t1 = 1;
    long long nextTerm = 0;
    for (int i = 0; i < term; ++i)
    {
        // print the first two term as it is
        if (i == 0)
        {
            cout << t0;
        }
        else if (i == 1)
        {
            cout << t1;
        }
        else
        {
            nextTerm = t0 + t1;
            t0 = t1;
            t1 = nextTerm;
            cout << nextTerm;
        }
        if (i < term - 1)
            {
                cout << ", ";
            }
    }
     cout<<endl;
        return 0;
}