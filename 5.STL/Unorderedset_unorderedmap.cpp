// set-sorted(0(log n))
// unorderedset-unsorted(but fast searching)-(0(1) average)
// use-frequencycount,caching ,lookup tables

#include<bits/stdc++.h>
using namespace std;
void demo(){
    //unorderedset
    unordered_set<int> us={5, 3, 8, 1, 3, 7, 1};
    cout<<"Unordered Set: ";
    for(int x:us) cout<<x<<" ";

    if(us.find(3)!=us.end())
    cout<<"\n3 found";

    //insert
    us.insert(10);
    cout<<"\nAfter insert 10, size: "<<us.size();

    //erase
    us.erase(3);
    cout<<"\nAfter erase 3: ";
    for(int x:  us) cout<<x<< " ";

    //count
    cout<<"\n7 count: "<<us.count(7);
    cout<<"\n99 count: "<<us.count(99);
    cout<<endl;
}

void mapdemo(){
    unordered_map<string,int> um;
    um["apple"] = 5;
    um["banana"] = 3;
    um["cherry"] = 8;
    um["apple"] = 10;


    //traverse:
    cout << "Unordered Map:" << endl;
    for(auto [key,val]: um){
        cout<<key<<"->"<<val<<"\n";
    }


    //search
    if(um.find("banana")!=um.end())
    cout<<"banana: "<<um["banana"]<<"\n";

    //erase
    um.erase("banana");
    cout<<"Size after erase: "<<um.size()<<"\n";
}


int main(){
    demo();
    mapdemo();
    return 0;
}




//use: 
// when need sorted- map/set
//when need fast loopup- unordered set/map
//frequency count- unordered map
//duplicate check- unordered set
//range queries- set/map
