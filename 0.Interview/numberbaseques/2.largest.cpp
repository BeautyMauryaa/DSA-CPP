// 2	Find the largest of 2 or 3 numbers	Conditions
#include<iostream>
using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int m;
//     cin>>m;
//     if(n>m){
//         cout<<"n is bigger";
//     }else if(n==m){
//         cout<<"both are eqal";
//     }else{
//         cout<<"m is bigger";
//     }
//     return 0;
// }

int main(){
    int a,b,c;
    cin>>a;
    cin>>b;
    cin>>c;
    if(a>b && b>c){
        cout<<"a is greater";
    }else if(b>a && b>c){
        cout<<"b is bigger";
    } else if(c>a &&c>b){
        cout<<"c is bigger";
    }else{
        cout<<"all are equal";
    }
    return 0;
}