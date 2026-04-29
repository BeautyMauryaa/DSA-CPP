#include<iostream>
using namespace std;
int print(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={2,0,1,2,1,0};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"before sorted: ";
    print(arr,size);
    int start=0,mid=0,end=size-1;
    while(mid<=end){
        if(arr[mid]==0){
            swap(arr[start++],arr[mid++]);
        }else if(arr[mid]==1){
            mid++;
        }else{
            swap(arr[mid],arr[end--]);
        }
    }
    cout<<endl;
    cout<<"after sorted:";
    print(arr,size);
    return 0;
 
}