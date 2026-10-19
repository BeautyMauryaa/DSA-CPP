#include<iostream>
using namespace std;
int getlength(char name[]){
    int count=0;
    for(int i=0; name[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char name[20];
    cout<<"enter you name "<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;
    cout<<"length of your name is ";
    cout<<getlength(name)<<endl;
    return 0;
    
}