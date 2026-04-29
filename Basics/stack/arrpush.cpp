#include<iostream>
using namespace std;
class stack{
    int arr;
    int size;
    int top;
    public:
    stack(int x){
          top==-1;
          arr=new int[s];
    }
    void push(int value){
        if(top==size-1){
            cout<<"stack is overflow.";
            return;
        }else{
            top++;
            arr[top]=value;
            cout<<"pushed"<<value<<"into the stack\n";
        }
    }
};
void display(){
    
}