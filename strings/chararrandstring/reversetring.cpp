#include<iostream>
using namespace std;
void reversed(char name[],int n){
    int start=0;
    int end=n-1;
    while(start<end){
        swap(name[start++],name[end--]);
    }
}

int getlength(char name[]){
    int count=0;
    for(int i=0;name[i]!='\0';i++){
        count++;
    }
    return count;
}


int main(){
    char name[20];
    cout<<"enter your name "<<endl;
    cin>>name;
    cout<<"your name is "<<name<<endl;
    int length= getlength(name);
    cout<<"name length is "<<length<<endl;
    cout<<"reverse of your name is "<<endl;
    reversed(name,length);
    cout<<name;
    return 0;
}