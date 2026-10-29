// find the heighest altitube
//altitude: start with 0 and each element represent the change in altitude
#include<iostream>
#include<vector>
using namespace std;

int main(){
    vector<int> arr={-5,1,5,0,-7};
    int n=arr.size();
    vector<int> prefix(n+1);
    prefix[0]=0;

    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];
    }


    //calculate prefix max:
    int max=prefix[0];
    for(int i=1;i<n;i++){
        if(prefix[i]>max){
            max=prefix[i];
        }
    }
    cout<<max<<"\n";
    return 0;
}