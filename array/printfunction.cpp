#include<Iostream>
using namespace std;
void printarray(int arr[],int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[]={2,3,4,6,7};
    int size=sizeof(arr)/sizeof(int);
    printarray(arr,size);
    cout<<endl;

    int arr1[20]={2,3,4};
    int arr1size=sizeof(arr1)/sizeof(int);
    cout<<arr1size<<endl;
    printarray(arr1,20);
    return 0;
}