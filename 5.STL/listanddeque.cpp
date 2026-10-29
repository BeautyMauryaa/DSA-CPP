// list: container that empliment double linked list
// non contiguous(because every elment points previous or next element we can add remove element from anywhere)
// every element has pointer to previous and next
// noded connected
// no random access like the linked list


// #include<list>
//  most used function vector:
//  push_back(add in the end)
//  pop_back(remove from end)
//  size()-check the number of element present in vector
//  empty()-check vector is empty or not
//  v[i]/v.at(i)- access
//  v.front()/v.back()- first and last
//  v.begin()/v.end()-iterators
//  v.clear()- delete
//  v.erase(it)-specific position delete
//  insert(it,x)-specific position insert(it(index),x(element))
//  v.resize(n) -size change
//  v.assign(n,x)

// declaration list<data_type> 1; empty, 1(5,10) //5 element all 10 , 1={13,4,5,6} - initialized

#include <iostream>
#include <list>
#include <deque>
using namespace std;

void aboutlist()
{
    // 1.Traversal:
    list<int> li = {2, 4, 5, 6, 7};

    cout << "range based: ";
    // range based
    for (int x : li)
        cout << x << " ";

    cout << endl;
    cout << "iterator traversal: ";
    // iterator
    for (auto it = li.begin(); it != li.end(); it++)
    {
        cout << *it << " ";
    }
}

// push_ back and front,sort,remove duplicate,reverse

void listfunction()
{
    list<int> li = {1, 6, 4, 1, 5, 9, 0, 1};
    // push back and front

    li.push_front(10);
    li.push_back(30);

    for (int x : li)
        cout << x << " ";

    // sort
    cout << endl;
    cout << "after sorting: ";
    li.sort();
    for (int x : li)
        cout << x << " ";

    // remove
    cout << endl;
    cout << "remove duplicate of 1: ";
    li.remove(1);
    for (int x : li)
        cout << x << " ";

    // reverse:
    cout << endl;
    cout << "reverse: ";
    li.reverse();
    for (int x : li)
        cout << x << " ";
}



//deque:double ended queue(means we can add or remove element from both side(front and back))

void abtdeque(){
    deque<int> dq={1,2,3,5};
    dq.push_front(9);
    dq.push_back(10);
    dq.push_front(4);

    cout<<"Deque: ";
    for(int x:dq) cout<<x<<" ";

    //we can easily access the element
    cout<<"Front: "<<dq.front();
    cout<<"random element: "<<dq[4];//like the vector
    cout<<"last : "<<dq.back();


    dq.pop_front();
    dq.pop_back();

    cout<<"after removing element: ";
    for(int x:dq) cout<<x<<" ";
}



//question:

void quest(){
    list<int> li={5,3,8,1,9,2};
    li.sort();
    li.reverse();
    for(int x:li) cout<<x<<" ";

    cout<<endl;
    cout<<"deque: ";
    deque<int> dq;
    dq.push_front(10);
     dq.push_front(13);
      dq.push_back(16);
       dq.push_back(19);
       for(int x:dq) cout<<x<<" ";


}
int main()
{
    aboutlist();
    cout << endl;
    listfunction();

    abtdeque();

    cout<<endl;
    cout<<"question: "<<endl;
    quest();



    return 0;
}



//vector vs list vs dequeu:
//vector-fast access,slow front inser;(default choise)
//list- slow acces,fast insert anywhere;(we use it when middle insert and delete are more)
//deque: fast access and fast insert front/back (we use it in sliding window,bfs,frontand back operation);

