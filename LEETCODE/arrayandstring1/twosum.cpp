#include<Iostream>
using namespace std;
int main(){
    int nums[5]={2,7,8,9,10};
    int traget;
    cout<<"enter the target "<<endl;
    cin>>traget;
    for(int i=0;i<5;i++){
        for(int j=i+1;j<5;j++){
            if(nums[i]+nums[j]==traget){
                cout<<"["<<i<<","<<j<<"]";
            }
        }
        
    }
    return 0;
}