#include<iostream>
using namespace std;
int main(){
    int arr[6]={1,3,4,5,6};
    int expectedsum=6*(6+1)/2;
    int actualsum=0;
    for(int i=0;i<6;i++){
        actualsum+=arr[i];
    }
    if(expectedsum==actualsum){
        cout<<"no mising num";
    }else{
        int missingnum=expectedsum-actualsum;
        cout<<missingnum;
    }
    return 0;
}

