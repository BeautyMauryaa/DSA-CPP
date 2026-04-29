#include<iostream>
using namespace std;
int main(){
    int i=5;
    int* p=&i;
    int** p2=&p;
    cout<<"printing p "<<p<<endl;
    cout<<"address of p "<<&p<<endl;
    //print value
    cout<<"printing value "<<*p<<endl;
    cout<<"printing value "<<*p2<<endl;
    cout<<i<<endl;
    cout<<*p<<endl;
    return 0;
}