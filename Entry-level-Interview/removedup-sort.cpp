#include<iostream>
#include<vector>
using namespace std;
void sortandremove(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n-1;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }

    //remove duplicate
    int size=0;
    for(int i=1;i<n;i++){
       if(arr[i]!=arr[size]){
        size++;
        arr[size]=arr[i];
       }
    }

    //resize
    arr.resize(size+1);
    for(int val:arr){
        cout<<val<<" ";
    }
}

int main(){
    vector<int> arr={1,2,3,1,5,3,8,4};
    sortandremove(arr);
    return 0;
}