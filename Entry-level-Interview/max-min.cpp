#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int maxval=arr[0];
    int minval=arr[0];
    for(int i=0;i<5;i++){
        if(arr[i]>maxval){
            maxval=arr[i];
        }
        if(arr[i]<minval){
            minval=arr[i];
        }
    }
    cout<<maxval;
    cout<<endl;
    cout<<minval;
    return 0;
}