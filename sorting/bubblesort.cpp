#include<iostream>
using namespace std;
void bubblesort(int arr[],int size){
    for(int i=0;i<=size;i++){
        for(int j=i+1;j<=size-1;j++){
            if(arr[j]<arr[i]){
                swap(arr[i],arr[j]);
            }
        }
    }
}
int main(){
    int arr[5]={1,0,5,2,7};
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    cout<<"sorted array: "<<endl;
    bubblesort(arr,5);
    for(int i=0;i<5;i++){
        cout<<arr[i]<<endl;
    }
    return 0;
    
}