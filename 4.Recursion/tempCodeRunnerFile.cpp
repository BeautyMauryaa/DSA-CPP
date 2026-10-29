//reverse an array
#include<iostream>
using namespace std;
int revarr(int n){
    if(n==0){
        return 0;
    }
    cout<<n<<" ";
    return revarr(n-1);
}

int main(){
    int n[5]={1,2,3,4,5};
    cout<<revarr(5);
    return 0;
}