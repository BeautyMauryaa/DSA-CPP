#include<iostream>
using namespace std;
int maxsum(vector<int> &nums,int k){
    int n=nums.size();
    int windowsum=0;
    for(int i=0;i<k;i++){
        windowsum+=nums[i];
    }
    int maxsum=windowsum;
    //sliding window
    for(int i=k;i<n;i++){
        winodwsum=windowsum+nums[i]-nums[i-k];
        maxsum=max(windowsum,maxsum);
    }
    return maxsum;
}