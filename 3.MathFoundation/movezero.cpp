#include<iostream>
using namespace std;
int main(){
    int arr[5]={0,1,2,0,5};
    int pos=0;
    for(int i=0;i<5;i++){
        if(arr[i]!=0){
            int temp=arr[i];
            arr[i]=arr[pos];
            arr[pos]=temp;
            pos++;
        }
    }
    for(int i=0;i<5;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}