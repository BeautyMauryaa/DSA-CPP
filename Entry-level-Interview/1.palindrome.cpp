// #include<iostream>
// using namespace std;
// int main(){
//     int n;
//     cin>>n;
//     int remainder;
//     int result=0;
//     int original=n;
//     while(n!=0){
//         remainder=n%10;
//         result=result*10+remainder;
//         n/=10;
//     }

//     if(result==original){
//         cout<<"palindrome";
//     }else{
//         cout<<"not palindrome";
//     }

//     return 0;

// }


//string palindrome:
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
    cout<<"enter string: ";
    cin>>str;

    if(ispalindrome(str)){
        cout<<"string is palindrome";
    }else{
        cout<<"string is not palindrome";
    }
    return 0;
}