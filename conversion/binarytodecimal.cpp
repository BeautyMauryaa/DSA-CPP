#include<iostream>
#include<math.h>
using namespace std;
int main(){
    // int n;
    // cin>>n;
    // int i=0;
    // int ans=0;
    // while(n!=0){
    //     int digit=n%10;
    //     if(digit==1){
    //         ans=ans+pow(2,i);
    //     }
    //     n=n/10;
    //     i++;
    // }
    //   cout<<ans;

    // int num;
    // cin>>num;
    // int i=0,ans=0;
    // while(num!=0){
    //     int digit=num%10;
    //     if(digit==1){
    //     ans=ans+pow(2,i);
    //     }
    //     num=num/10;
    //     i++;
    // }
    // cout<<ans;

    int num;
    cin>>num;
    int mul=1,rem,ans=0;
    while(num!=0){
        rem=num%10;
        num=num/10;
        ans=mul*rem+ans;
        mul*=2;
    }
    cout<<ans;
    return 0;
}