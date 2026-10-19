// Find LCM of two numbers	GCD and multiplication
#include<iostream>
using namespace std;
int main(){
    long long a=15,b=20;
    //find gcd
    long long originala=a;
    long long originalb=b;
    while(b!=0){
        long long  temp=b;
        b=a%b;
        a=temp;
    }
    long long gcd=a;

    //lcm formula
    long long lcm=(originala/gcd)*originalb;
    cout<<lcm;
    return 0;
}