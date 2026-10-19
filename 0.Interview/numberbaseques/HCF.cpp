// Find GCD/HCF of two numbers	Euclidean algorithm


// #include<iostream>
// #include<numeric>
// using namespace std;
// int main(){
//     int a;
//     cin>>a;
//     int b;
//     cin>>b;
//      cout<<gcd(a,b)<<endl;
//     return 0;

// }


#include<iostream>
using namespace std;
int main(){
    int a=48;
    int b=18;
    while(b!=0){
        int temp=b;
        b=a%b;
        a=temp;
    }
    cout<<a;
    return 0;

}