#include<iostream>
using namespace std;
//with using third variable
void reverse(string &s){
    int left=0;
    int right=s.length()-1;

    while(left<right){
        char temp=s[left];
        s[left]=s[right];
        s[right]=temp;
        left++;
        right--;
    }
}

//without using third variable;

void reversstring(string &s){
    int left=0;
    int right=s.length()-1;
    while(left<right){
        swap(s[left],s[right]);
        left++;
        right--;
    }
}
int main(){
    string s;
    cin>>s;
    //reverse(s);
    reversstring(s);
    cout<<s;
    return 0;

}

