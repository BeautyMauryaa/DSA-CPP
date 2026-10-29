//stack-LIFO(last in first out)
// #include<stack>
// stack<int> st;
//operation: push,pop,top,empty,size

#include<iostream>
#include<stack>
#include<queue>
using namespace std;
void abtstack(){
    stack<int> st;
    st.push(10);
    st.push(3);
    st.push(23);

    cout<<st.top()<<endl;
    st.pop();//remove top element
    cout<<st.top();

    //we can't access the element by index in stack (st[0])
    //only top access allowed

}
//queue: FIFO(first in first out) 
void abtqueue(){
    queue<int> q;
    //push,pop,front,back,empty
    q.push(10);
    q.push(8);
    q.push(7);
    cout<<q.front()<<endl;//10
    q.pop();
    cout<<q.front();//8
}
//stack-last removed first (top)
//queue-first removed first(front)
//by default both use deque
int main(){
    abtstack();
    cout<<"queue: ";
    abtqueue();
    return 0;
}