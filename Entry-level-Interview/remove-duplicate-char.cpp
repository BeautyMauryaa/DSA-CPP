#include<iostream>
using namespace std;
int main(){
    string str;
    cin>>str;
    string result="";
    

    for(int i=0;i<=str.length();i++){
        bool duplicate=false;
        for(int j=0;j<=result.length();j++){
            if(str[i]==result[j]){
                duplicate=true;
                break;
            }
        }
        if(!duplicate){
            result+=str[i];
        }

    }
    cout<<result;
    return 0;
}