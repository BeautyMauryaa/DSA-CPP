#include<iostream>
using namespace std;
int duplicate(int arr[],int n){
    int ans=0;
    for(int i=0;i<n;i++){
        ans=ans^arr[i];
    }
    // for(int i=1;i<n;i++){
    //     ans=ans^1;
    // }
    return ans;
}

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"the array is "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int duplicateelement=duplicate(arr,n);
    cout<<duplicateelement;
    return 0;
}