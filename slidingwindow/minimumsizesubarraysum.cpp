#include<iostream>
using namespace std;
int minimumsubarraysum(int arr[],int target,int size){
    int start=0;
    int current_sum=0;
    int min_len=size+1;
    for(int end=0;end<size;end++){
        current_sum+=arr[end];
        while(current_sum>=target){
            int current_length=end-start+1;
            if(current_length<min_len){
                min_len=current_length;
            }
            current_sum-=arr[start];
            start++;
        }
    }
    return(min_len==size+1)?0:min_len;
};
int main(){
    int arr[]={2,3,4,6,7,8};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target=9;
    int result=minimumsubarraysum(arr,target,size);
    cout<<"minimum subarray is:"<<result;
    return 0;
}