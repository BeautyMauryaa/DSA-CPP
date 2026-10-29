#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    string a="listen";
    string b="silent";
    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
    if(a==b){
        cout<<"annagram";
    }else{
        cout<<"not annagram";
    }
    return 0;
}