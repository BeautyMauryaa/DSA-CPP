#include<iostream>
using namespace std;
void selectionsort(int arr[],int size){
    for(int i=0;i<size;i++){
        int minindex=i;
        for(int j=i+1;j<=size-1;j++){
            if(arr[j]>arr[minindex]){
              minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}

int print(int arr[],int size){
    for(int i=0;i<size-1;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5]={2,3,4,1,9};
    print(arr,5);
    cout<<"sorted: "<<endl;
    selectionsort(arr,5);
    print(arr,5);
    return 0;
}