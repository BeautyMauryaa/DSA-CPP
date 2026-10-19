// Count the digits in a number	Loops and integer division

#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int count=0;
    
    //1. if digit is 0 only
    if(num==0){
        count++;
    }

    //2. if negative
    if(num<0){
        num=-num;
    }

    //3. count
    while(num>0){
        num/=10;
        count+=1;
    }
    cout<<"count is: "<<count;
    return 0;
}