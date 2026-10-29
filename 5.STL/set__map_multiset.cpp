// set-sorted (unique element only)
#include <bits/stdc++.h>
using namespace std;
void setdemo()
{
    set<int> s;
    s.insert(1);
    s.insert(5);
    s.insert(0);
    s.insert(7);
    s.insert(8);
    s.insert(3);
}

void setques()
{
    set<int> s1 = {5, 3, 8, 1, 3, 7, 1};
    cout << "Set: ";
    for (int x : s1)
        cout << x << " ";

    if (s1.find(3) != s1.end())
        cout << "\n3 found!";
    else
        cout << "\n3 not found";

    // erase:
    s1.erase(8);
    cout << "\n after erase 8";
    for (int x : s1)
        cout << x << " ";

    auto it = s1.lower_bound(5);
    cout << "\n Lower bound of 5: " << *it;

    auto it2 = s1.upper_bound(5);
    cout << "\nUpper bound of 5: " << *it2;
}

// multiset(sorted order but can contain duplicate)
void multisetdemo()
{

    multiset<int> ms;

    ms.insert(10);
    ms.insert(5);
    ms.insert(10);
    ms.insert(20);

    for (int x : ms)
        cout << x << " ";

    // count:
    cout << "count 10: " << ms.count(10);

    // erase
    cout << endl;
    ms.erase(ms.find(10));
    cout << "after removing: ";
    for (int x : ms)
        cout << x << " ";

    cout << endl;
    for (int x : ms)
        cout << x << " ";
}

// map-key-value pair container
// key(sorted unique) and values(can be anything)
// map<key,value>;
// map<string,key>;
// map<key,string>;
// map<string,string>;
void mapdemo()
{
    map<string, int> mp;
    //     {"rihu",6},
    //     {"swati",9},
    //     {"nishu",4},
    //     {"shruti",8},
    //     {'rihu',7}
    //  };

    // mp[key]=value(update)
    // mp.insert[{key,val}]=insert
    // mp.erase(key)
    // mp.find(key)-iterator
    // mp.count(key)-0 ya 1
    // mp.size()-size
    // mp.empty()-empty check
    // mp.at(key)-safe access

    // insert by using insert fucntion;
    mp["apple"] = 5;
    mp["banana"] = 3;
    mp["cherry"] = 8;
    mp["apple"] = 10; // update not duplicate

    cout << "Map: " << endl;

    // old way to traverse
    //  for (auto p : mp)
    //  {
    //      cout << p.first << "->" << p.second << "\n";
    //  }

    // modern way(c++17)
    for (auto [key, val] : mp)
    {
        cout << key << " " << val;
    }

    // search

    if (mp.find("banana") != mp.end())
        cout << "banana found: " << mp["banana"] << "\n";

    // erase:
    mp.erase("banana");
    cout << "size after erase: " << mp.size() << "\n";
}

// multimap- one key-multiple value:
void multimapdemo()
{
    multimap<string, int> mm;
    mm.insert({"rihu", 90});
    mm.insert({"rihu", 89}); // same key allowed;
    mm.insert({"beauty", 90});

    for (auto [key, val] : mm)
    {
        cout << key << " " << val << "\n";
    }
}

// question
// 1.multiset:
void quest()
{
    multiset<int> ms;
    ms.insert(4);
    ms.insert(2);
    ms.insert(7);
    ms.insert(2);
    ms.insert(4);
    ms.insert(9);
    ms.insert(1);
    ms.insert(7);
    ms.insert(4);

    // count 4:
    cout << "Count 4: " << ms.count(4);
    cout << endl;
    // remove four only one
    cout << "after removing one four: ";
    ms.erase(ms.find(4));
    for (int x : ms)
        cout << x << " ";

    cout << endl;
    // map frequency:
    cout << "map freq: ";
    string s = "Rohan loves food Rohan loves DSA too and Rohan loves games as well";
    map<string, int> freq;
    stringstream ss(s); // string behave like input(word by word processing)
    string word;
    while (ss >> word)
    {
        freq[word]++;
    }
    for (auto [key, val] : freq)
    {
        cout << key << " - " << val << "\n";
    }


    //max word:
    string maxword;
    int maxcount = 0;
    for(auto [key,val]: freq){
        if(val>maxcount){
            maxcount=val;
            maxword=key;
        }
    }
    cout<<"Most frequent word: "<<maxword<<"->"<<maxcount;
}


void marks(){
    map<string,int> mp={
        {"shreya",89},
        {"feru",87},
        {"raj",90},
        {"musu",77}
    };

   //print student with marks
   cout<<"student and marks: "<<endl;
   for(auto [name,score]:mp)
{
    cout<<name<<"->"<<score<<endl;
}

string topper;
int maxcount=0;
for(auto [name,score]:mp){
    if(score>maxcount){
        maxcount=score;
        topper=name;
    }
}

cout<<"topper: "<<topper<<"->"<<maxcount<<endl;




}

int main()
{
    setques();
    multisetdemo();
    cout << endl;
    cout << "Map" << endl;
    mapdemo();

    cout << endl;
    cout << "Multimap: " << endl;
    multimapdemo();

    // question
    cout << "Question pract:";
    quest();

    //maxmarks:
    cout<<endl;
    cout<<"max marks: ";
    marks();
    return 0;
}