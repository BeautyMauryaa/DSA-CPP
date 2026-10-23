#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,2};
    int size=0;
    for(int i=0;i<5;i++){
        bool duplicate=false;
        for(int j=0;j<size;j++){
            if(arr[i]==arr[j]){
                duplicate=true;
                break;
            }
        }
        if(!duplicate){
            arr[size]=arr[i];
            size++;
        }
    }
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}