#include<iostream>
using namespace std;
bool checkpalindrome(char str[],int n){
    int s=0;
    int e=n-1;
    while(s<=e){
        if(str[s]!=str[e]){
            return 0;
        }else{
            s++;
            e--;
        }
    }
    return 1;
}

int getlength(char str[]){
    int count=0;
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){
    char str[20];
    cout<<"enter string "<<endl;
    cin>>str;
    int length=getlength(str);
    cout<<"the length of the string is "<<length<<endl;
    cout<<"check palindrome "<<endl;
    cout<<checkpalindrome(str,length);
    return 0;
}