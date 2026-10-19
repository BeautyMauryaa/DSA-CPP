// Check whether a number is a palindrome	Reverse and compare

#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int reverseorder=0;
    int remainder;
    int originalorder=n;
    while(n!=0){
        remainder=n%10;
        reverseorder=reverseorder*10+remainder;
        n/=10;
    }

    if(reverseorder==originalorder){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome ";
    }
    return 0;
}