#include <iostream>
using namespace std;

int rev(int n){
    long long rev=0;
    while(n!=0){
        int digit=n%10;
        rev=rev*10+digit;
        if(rev>INT_MAX || rev<INT_MIN){
            return 0;
        }
        n=n/10;
    }
    return rev;
}


int revstr(string s){
    for(int i=s.length()-1;i>=0;i--){
        cout<<s[i];
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    cout<<rev(n)<<"\n";
    string s;
    cin>>s;
    revstr(s);
    return 0;
}