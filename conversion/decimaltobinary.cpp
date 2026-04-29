#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int ans=1;
    // int i=0;
    // while(n!=0){
    //     int bit=n&1;
    //     ans=(bit*pow(10,i))+ans;
    //     n=n>>1;
    //     i++;
    // }
    // cout<<"answer is:"<<ans<<endl;

    // int n;
    // cin>>n;
    // int rem,ans=0,mul=1;
    // while(n>0){
    //     rem=n%2;
    //     n=n/2;
    //     ans=rem*mul+ans;
    //     mul=mul*10;
    // }
    // cout<<ans;

    // int n;
    // cin>>n;
    // int i=0,ans=1;
    // while(n!=0){
    //     int bit=n&1;
    //     ans=bit*pow(10,i)+ans;
    //     n=n>>1;
    //     i++;
    // }

    int n;
    cin>>n;
    int i=0,ans=1;
    while(n!=0){
        int bit=n&1;
        ans=bit*pow(8,i)+ans;
        n=n>>1;
        i++;
    }
    cout<<ans;
}