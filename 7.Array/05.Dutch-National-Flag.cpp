//this algois used to sort the array who contain 0,1,2 only

//ex: arr = {2, 0, 2, 1, 1, 0}
// want: 0 0 1 1 2 2


#include <iostream>
#include <vector>
using namespace std;

void sortColor(vector<int>& nums){
    int low=0,mid=0,high=nums.size()-1;
    while(mid<=high){
        if(nums[mid]==0){
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[mid],nums[high]);
            high--;
        }
    }
}


int main(){
    vector<int> nums = {2, 0, 2, 1, 1, 0};
    sortColor(nums);
    for(int i=0;i<nums.size();i++){
        cout<<nums[i]<<" ";
    }
}