#include<iostream>
using namespace std;
void sorted(int arr[],int n){
    int low=0;
    int mid=0;
    int high=n-1;
    while(mid<=high){
        if(arr[mid]==0){
            swap(arr[mid],arr[low]);
            low++;
            mid++;
        }else if(arr[mid]==1){
            mid++;
        } 
        else{
            swap(arr[mid],arr[high]);
            high--;
        }
    }
    }

int main(){
    int arr[9]={1,1,1,0,0,2,0,2,1};
    cout<<"sorted array "<<endl;
    sorted(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}