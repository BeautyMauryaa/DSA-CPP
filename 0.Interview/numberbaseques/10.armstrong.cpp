// Check whether a number is an Armstrong number	Digit extraction and powers


#include<iostream>
#include<cmath>
using namespace std;
int main(){
   int num;
   cin>>num;
   int originalnum=num;
   int remainder;
   int digit=0;
   int result=0;

   int temp=num;
   while(temp!=0){
    temp/=10;
    digit++;
   }
   temp=num;
   while(temp!=0){
    remainder=temp%10;
    result+=round(pow(remainder,digit));
    temp/=10;
   }
   if(result==originalnum){
    cout<<"armstrong";
   }else{
    cout<<"not armstrong";
   }
   return 0;


}