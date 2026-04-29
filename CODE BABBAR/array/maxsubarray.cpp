#include<iostream>
using namespace std;
int maxsubarray(int arr[],int n){
    int sum=0;
    int maxsum=INT16_MIN;
    for(int i=0;i<n;i++){
        sum=sum+arr[i];
        if(sum>maxsum){
            maxsum=sum;
        }
        if(sum<0){
            sum=0;
        }
    }
    return maxsum;
}

int main(){
    int arr[5]={1,2,3,4,5};
    int maxsum=maxsubarray(arr,5);
    cout<<maxsum;
    return 0;
}