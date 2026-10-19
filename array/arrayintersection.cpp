#include<iostream>
using namespace std;
int intersection(int arr1[],int n,int arr2[],int m){
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            if(arr1[i]==arr2[j]){
                cout<<arr1[i]<<" ";
                break;
            }
        }
    }

}
int printarray(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i];
    }
}


int main(){
    int n;
    cin>>n;
    cout<<"arr2: "<<endl;
    int m;
    cin>>m;
    int *arr1=new int[n];
    int *arr2=new int[m];
    for(int i=0;i<n;i++){
        cin>>arr1[i];
    }
    cout<<"arr1 is "<<endl;
    printarray(arr1,n);
    cout<<endl;
    for(int i=0;i<m;i++){
        cin>>arr2[i];
    }
    cout<<"arr2 is "<<endl;
    printarray(arr2,n);
    cout<<endl;
    cout<<"entersection is: "<<endl;
    intersection(arr1,n,arr2,m);
    return 0;



}