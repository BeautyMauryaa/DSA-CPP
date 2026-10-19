// Reverse a number	Digit extraction
//steps:
//1. extract the last digit - remainder=num%10
//2. append the last digit to the the first - reversenum=reversenum*10+remainder
//3. remove the last digit - num/=10


#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    int reversenum=0;
    int remainder;
    int originalnum=num;
    while(num!=0){
        //1. extarct
        remainder=num%10;
        //2. append 
        reversenum=reversenum*10+remainder;
        //3. remove
        num/=10;
    }
    cout<<"reverser order: "<<reversenum;
    cout << endl;
    cout<<"original order: "<<originalnum;
    return 0;
}