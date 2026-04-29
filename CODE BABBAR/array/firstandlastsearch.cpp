#include<iostream>
using namespace std;
int firstoccurance(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int first;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            first=mid;
            end=mid-1;
        }
        else  if(arr[mid]<key){
           first=mid;
           start=mid+1;
        }else{
            end=mid-1;
        }
    }
    return first;
}
int main(){
    int arr[5]={1,2,3,3,5};
    int key=3;
    int ans=firstoccurance(arr,5,key);
    cout<<ans;
    return 0;
}