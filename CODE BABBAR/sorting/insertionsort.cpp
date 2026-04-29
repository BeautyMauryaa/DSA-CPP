#include<iostream>
using namespace std;
void insertionsort(int arr[],int size){
    for(int i=1;i<size;i++){
        int key=arr[i];
        int j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j--;
        }
        arr[j+1]=key;
    }
}

int print(int arr[],int size){
    for(int i=0;i<=size-1;i++){
        cout<<arr[i]<<endl;
    }
}

int main(){
    int arr[5]={2,1,4,6,3};
    print(arr,5);
    cout<<"after sorted: "<<endl;
    insertionsort(arr,5);
    print(arr,5);
    return 0;
}