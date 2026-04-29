#include<iostream>
using namespace std;
void deletion(int arr[],int n,int pos){
    for(int i=pos;i<n-1;i++){
            arr[i]=arr[i+1];
        }
    n--;

    cout<<"updated array: "<<endl;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int arr[]={1,1,1,0,0,2,0,2,1};
    int n=9;
    int pos;
    cout<<"enter pos: ";
    cin>>pos;
    deletion(arr,9,pos);
    return 0;
}