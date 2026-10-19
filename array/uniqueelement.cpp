
#include<iostream>
using namespace std;
int uniqueelement(int arr[],int n){
    int unique=0;
    for(int i=0;i<n;i++){
        unique=unique^arr[i];
    }
    return unique;
}

int main(){
    int n;
    cin>>n;
    int *arr=new int[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    int ans=uniqueelement(arr,n);
    cout<<ans;
    return 0;
}