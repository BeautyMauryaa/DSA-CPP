#include<iostream>
using namespace std;
int main(){
    int nums[5]={2,5,7,8,9};
    int target;
    cin>>target;
    int start=0;int end=5-1;
    int twosum=nums[start]+nums[end];
    for(;start<end;){
       if(twosum==target){
        cout<<"["<<start+1<<","<<end+1<<"]"<<endl;
       }
    }
    return 0;
}