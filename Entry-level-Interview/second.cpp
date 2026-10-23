#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int larget=INT_MIN;
    int secondlargest=INT_MIN;
    for(int i=0;i<5;i++){
        int x=arr[i];
        if(x>larget){
            secondlargest=larget;
            larget=x;
        }else if(x>secondlargest&& x<larget){
            secondlargest=x;
        }
    }

    if(secondlargest==INT_MIN){
        cout<<"doesn;t exit";`
    }else{
        cout<<secondlargest;
    }
    return 0;
}