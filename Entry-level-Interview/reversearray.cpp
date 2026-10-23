#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    
    int left=0;
    int right=5-1;
    
    while(left<right){
        int temp=arr[left];
        arr[left]=arr[right];
        arr[right]=temp;
        left++;
        right--;
    }

    for(int j=0;j<=5;j++){
        cout<<arr[j]<<" ";
    }
    return 0;
}