#include<iostream>
using namespace std;
//print *********
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<"*";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }

//print num 111222333
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//         while(j<=n){
//             cout<<"1";
//             j=j+1;
//         }
//         cout<<endl;
//         i=i+1;
//     }
// }


// int main(){
//   int n;
//   cin>>n;
//   int i=1;
//   while(i<=n){
//     int j=1;
//     while(j<=n){
//         cout<<j;
//         j=j+1;
//     }
//     cout<<endl;
//     i=i+1;
//   }

// }

//reverse 4321..4321..4321..4321
// int main(){
//     int n;
//     cin>>n;
//     int i=1;
//     while(i<=n){
//         int j=1;
//        while(j<=n){
//         cout<<n-j+1;
//         j=j+1;
//        }
//        cout<<endl;
//        i=i+1;
//     }
// }


//123...456...789
int main(){
    int n;
    cin>>n;
    int i=1;
    int count=1;
    while(i<=n){
        int j=1;
        while(j<=n){
            cout<<count<<" ";
           count=count+1;
           j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}