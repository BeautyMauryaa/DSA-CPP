#include<iostream>
using namespace std;
void duplicatelement(int arr[],int n){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]==arr[j]){
                cout<<arr[i];
                break;
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
     cout<<"duplicate element is ";
    duplicatelement(arr,n);
    return 0;
}