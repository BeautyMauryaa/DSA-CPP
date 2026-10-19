#include<iostream>
using namespace std;
void alternateswap(int arr[],int n){
    for(int i=0;i<n-1;i+=2){
        swap(arr[i],arr[i+1]);
    }
}

void printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}

int main(){
    int n;
    cout<<"size ";
    cin>>n;
    int *arr = new int[n];
    cout<<"original array "<<endl;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    printarray(arr,n);
    cout<<"swapped array "<<endl;
    alternateswap(arr,n);
    printarray(arr,n);
    return 0;
}