#include<iostream>
using namespace std;
int getmin(int arr[],int size){
    int min=INT16_MAX;
    for(int i=0;i<size;i++){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}

int getmax(int arr[],int size){
    int maxi=INT16_MIN;
    for(int i=0;i<size;i++){
    //     if(arr[i]>max){
    //         max=arr[i];
    //     }
        maxi=max(maxi,num[i]);
    }
    return max;
}

int main(){
    int size;
    cin>>size;
    int arr[100];
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"minimum element is: "<<getmin(arr,size)<<endl;
    cout<<"maximum element is: "<<getmax(arr,size);
    return 0;
}