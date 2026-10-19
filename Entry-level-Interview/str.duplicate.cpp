#include<iostream>
#include<set>
#include<string>
#include<algorithm>

using namespace std;
//by using set
string duplilcate(string s){
    set<char> uniqueChars(s.begin(),s.end());
    string result="";
    for(char c: uniqueChars){
        result+=c;
    }
    return result;
}

//without using set
string duplicate2(string s){
    sort(s.begin(),s.end());

    //send the all deplicates at the end 
    auto it=unique(s.begin(),s.end());
    s.erase(it,s.end());
    return s;
}

int main(){
    string str;
    cin>>str;
    string ans=duplilcate(str);
    string ans2=duplicate2(str);
    cout<<ans2<<endl;
    cout<<ans;
    return 0;
}