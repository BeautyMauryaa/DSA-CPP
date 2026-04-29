#include<iostream>
using namespace std;
int searching(int arr[],int size,int target){
    for(int i=0;i<size;i++){
        if(arr[i]==target){
            cout<<"present "<<endl;
            cout<<"index is "<<i<<endl;
        }

    }
}
int main(){
    int size;
    cout<<"size "<<endl;
    cin>>size;
    int arr[size];
    cout<<"enter the element "<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target "<<endl;
    cin>>target;
    searching(arr,size,target);
    return 0;
}