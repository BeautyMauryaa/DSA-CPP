#include<iostream>
using namespace std;
int tripletsum(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            for(int k=j+1;k<n;k++){
                if(arr[i]+arr[j]+arr[k]==element){
                cout<<"["<<i<<","<<j<<","<<k<<"]";
                }
            }
        }
    }
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
    int triplet;
    cout<<"enter triplet sum      ";
    cin>>triplet;
    cout<<endl;
    tripletsum(arr,n,triplet);
    return 0;
}