#include<iostream>
using namespace std;
int main(){
    char ch[5]={'a','b','c','d','f'};
    cout<<ch[4]<<endl;
    for(int i=0;i<5;i++){
        cout<<ch[i]<<" ";
    }
    return 0;
}