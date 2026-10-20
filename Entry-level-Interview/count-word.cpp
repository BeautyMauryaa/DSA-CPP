#include<iostream>
using namespace std;
int main(){
    string word;
    cin>>word;

    int words=0;
    bool inword=false;
    for(char ch:word){
        if(ch!=' '||ch!='/t'||ch!='/n'){
            words++;
            inword= true;
        }else{
            inword=false;
        }
    }
    cout<<words;
    return 0;

}