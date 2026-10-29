#include<iostream>
using namespace std;
int fib(int n){
    if(n<=1){
        return n;
    }
    int a=0,b=1;
    for(int i=2;i<=n;i++){
        int next=a+b;
        a=b;
        b=next;
    }
    return b;
}

int main(){
    int n;
    cin>>n;
    cout<<fib(n);
}

//fibonacci means a series of numbers in which each number is the sum of the two preceding numbers
//ex: 1,1,2,3,5,8,13,21,34,55