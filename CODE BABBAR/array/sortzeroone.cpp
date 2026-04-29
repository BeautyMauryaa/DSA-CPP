#include<iostream>
using namespace std;
void sortzerone(int arr[],int n){
   int left=0;
   int right=n-1;
   while(arr[left]==0&&left<right){
    left++;
   }
   while(arr[right]==1&&left<right){
    right--;
   }
   
   while(arr[left]==1 &&arr[right]==0 && left<right){
    swap(arr[left],arr[right]);
    left++;
    right--;
   }
}

int main(){
    int arr[9]={1,1,1,0,0,0,0,1,1};
    cout<<"sorted array "<<endl;
    sortzerone(arr,9);
    for(int i=0;i<9;i++){
        cout<<arr[i]<<" ";
    }
    return 0;

}