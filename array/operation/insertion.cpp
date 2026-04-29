#include<iostream>
using namespace std;
void insertion(int arr[],int n, int element,int pos){
    for(int i=0;i<=pos;i++){
        if(i==pos){
            arr[i]=element;
            n++;
        }
    }
}
int main(){
    int arr[9]={1,1,1,0,0,2,0,2,1};
    int pos;
    cout<<"enter pos: ";
    cin>>pos;
    int element;
    cout<<"enter element: ";
    cin>>element;
    insertion(arr,9,element,pos);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}