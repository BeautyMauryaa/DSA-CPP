#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int target;
    cin>>target;
    for(int i=0;i<5-1;i++){
        for(int j=i+1;i<=5;i++){
            if(arr[i]+arr[j]==target){
                cout<<"found "<<arr[i]<<" "<<arr[j];
                return 0;
            }
        }
    }
    return 0;
}