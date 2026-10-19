// Find the factorial of a number	Loops and multiplication
#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    long long factorial=1;

    if(n<0){
        cout<<"error! the factorial of negative number doesn't exit.";
        return 0;
    }
    else{
        for(int i=1;i<=n;i++){
         factorial=factorial*i;
        }
        cout<<"factorial of n is: "<<factorial;
    }
    return 0;
}