#include<iostream>
using namespace std;
int main(){
    int num;
    cin>>num;
    
    if(num<=0){
        cout<<"negative num";
        return 0;
    }
    long long fact=1;
    for(int i=1;i<=num;i++){
        fact=fact*i;
    }
    cout<<fact;
    return 0;

}