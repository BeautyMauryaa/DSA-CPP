#include<iostream>
using namespace std;
int pairsum(int arr[],int n,int element){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]+arr[j]==element)
            cout<<"["<<i<<","<<j<<"]";
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
    int sum;
    cout<<"enter the sum element: ";
    cin>>sum;
    pairsum(arr,n,sum);
    return 0;
}