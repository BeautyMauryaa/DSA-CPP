#include<iostream>
using namespace std;
bool ispalindrome(string s){
    int left=0;
    int right=s.length()-1;
    while(left<right){
        if(s[left]!=s[right]){
            return false;
        }
        left++;
        right--;
        }
        return true;
}
int main(){
    string str;
    cin>>str;
    if(ispalindrome(str)){
        cout<<"palindrome";
    }else{
        cout<<"not palindrome";
    }
    return 0;

}