#include<iostream>
using namespace std;
int sumofelement(int arr[],int size){
    int sum=0;
    for(int i=0;i<size;i++){
        sum=sum+arr[i];
    }
    cout<<sum;
}
int main(){
    int size;
    cout<<"enter the size of array: ";
    cin>>size;
    int arr[size];
    cout<<"enter the element of array"<<endl;
    for(int i=0;i<size;i++){
        cin>>arr[i];
    }
    cout<<"the sum of element is: ";
    sumofelement(arr,size);
    return 0;

}