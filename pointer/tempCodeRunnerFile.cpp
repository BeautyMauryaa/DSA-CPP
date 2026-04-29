#include<iostream>
using namespace std;
int main(){
   //pointer decalaration
   //pointr dereference
   //pointer garbage value
   //pointer point to value
   //increment
   //dcrement
   int *p;//will print garbage address
   cout<<p<<endl;

   int num=5;
   int a=num;
   //adress operator &
   int *ptr=&num;
   cout<<*ptr<<endl;
   //print address of num;
   cout<<ptr<<endl;
   //increement;
   cout<<"a before "<<num<<endl;
   num++;
   cout<<"a after "<<num<<endl;

   cout<<"before"<<num<<endl;
   (*ptr)++;
   cout<<"after"<<num<<endl;

   //copying a pointer
   int *q=ptr;
   cout<<p<<"-"<<q<<endl
   cout<<*ptr<<"_"<<*q<<endl;
}