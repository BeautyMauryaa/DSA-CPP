#include<iostream>
using namespace std;
void updatearr(int arr[],int size){
    cout<<"inside the function"<<endl;
    arr[2]=20;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }cout<<endl;


    cout<<"Going back to main function"<<endl;
}

int main(){
    int size=3;
    int arr[size]={3,4,5};
    cout<<"updated function: "<<endl;
    updatearr(arr,size);
    cout<<endl<<"Printing in main function"<<endl;
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}

