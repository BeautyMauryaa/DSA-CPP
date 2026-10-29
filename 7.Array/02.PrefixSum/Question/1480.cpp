#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> nums={2,5,6,7,8};
    int n=nums.size();
    vector<int> prefix(n);

    prefix[0]=nums[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+nums[i];
    }
    

    for(int i=0;i<n;i++){
        nums[i]=prefix[i];
    }
    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    }
    return 0;
}