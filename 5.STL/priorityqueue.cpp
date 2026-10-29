//priority_queue(heap(max heap))- it gives the priority of highest element(normal queue-fifo)
// highest element based


//largest element=highest priority(max heap)

//#include<queue>
// priority_queue<int> pq;


#include<iostream>
#include<queue>
using namespace std;

void aboutpq(){//max heap
    priority_queue<int> pq;

    pq.push(10);
    pq.push(20);
    pq.push(30);
    pq.push(90);
    //pop,push,top,empty,size

    cout<<pq.top()<<endl;//90
    pq.pop();
    cout<<pq.top()<<endl;//30

     cout<<"max heap: ";
    while(!pq.empty()){
        cout<<pq.top()<<" ";

        pq.pop();
    }
}


//min heap(smallest element)

void minheap(){
    priority_queue<int,vector<int>,greater<int>> pq;

    //weird delcration becuase pq internally uses vector and comparator(greater<int>) to decide heap order;
    pq.push(10);
    pq.push(3);
    pq.push(20);
    pq.push(30);
    pq.push(29);
    pq.push(3);

    cout<<pq.top()<<endl;//3
    pq.pop();
    cout<<pq.top()<<endl;//10
cout<<endl;

    cout<<"min heap: ";
    while(!pq.empty()){
        cout<<pq.top()<<" ";
        pq.pop();
    }
}

int main(){
    aboutpq();
    minheap();
    return 0;
}

