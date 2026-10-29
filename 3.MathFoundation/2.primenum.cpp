#include<iostream>
using namespace std;
int main(){
 int num;
 cout<<"enter num: ";
 cin>>num;

 if(num<2){
    cout<<"not prime num";
    return 0;
 }

 bool isprime=true;
 for(int i=2;i<num/i;i++){
    if(num%i==0){
        isprime =false;
        break;
    }
 }
 if(isprime){
    cout<<"prime num";
 }else{
    cout<<"not prime num";
 }
 return 0;
}