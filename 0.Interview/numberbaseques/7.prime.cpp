// Check whether a number is prime	Divisibility

#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    if(num<2){
        cout<<"not prime number";
        return 0;
    }

    bool isprime=true;
    for(int i=2;i<=num/i;i++){
       if(num%i==0){
        isprime=false;
        break;
       }
    }
    if(isprime){
        cout<<"prime number";
    }else{
        cout<<"not prime number";
    }
    return 0;
}